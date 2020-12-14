import subprocess
from os import SEEK_SET, getenvb
import logging
logging.basicConfig(
   filename='benchmarks/logDir/benchmark.log',
   level=logging.INFO,
   format='%(asctime)s.%(msecs)03d %(levelname)s %(module)s - %(funcName)s: %(message)s',
   datefmt='%H:%M:%S'
)


# TODO: add this dove vuoi venga loggato
# logging.info()

NUM_ROUNDS = 1
INSERT_TRACE_NAME = "insert_id="
DELETE_TRACE_NAME = "delete_s="
BENCHMARK_DIR = "benchmarks"
SAFE_TRACE_NAME = "VERIFICATION SUCCESSFUL"
   
def launch_lazy_cseq(input_file,include_param):
   subprocess.call(["./cseq-feeder.py", "-i", f"{BENCHMARK_DIR}/{input_file}","-I",include_param
   ,"--unwind","5","--cex","--debug", "--rounds", f"{NUM_ROUNDS}"])
   logging.info()
   
def generate_stack_state(state_list):
   data_structure = []
   for state in state_list:
     if state == "delete":
         if len(data_structure) == 0:
            continue
         del data_structure[len(data_structure)-1]
     else:
        data_structure.insert(len(data_structure),state)
   return data_structure


def generate_queue_state(state_list):
   logging.info()
   data_structure = []
   for state in state_list:
      if state == "delete":
         if len(data_structure) == 0:
            continue
         del data_structure[len(data_structure)-1]
      else:
         data_structure.insert(0,state)
   return data_structure


def get_data_structure_state(pathname,data_structure_type):
   data_structure_states = []
   f = open(pathname)
   lines = [line.rstrip('\n') for line in f]
   #Iterate through the trace and find the lines in which there are pushes and pops
   for x in lines:
      if( INSERT_TRACE_NAME in x ):
         data_structure_states.append(x[x.index("=")+1:x.index("ull")])
      if( DELETE_TRACE_NAME in x ):
         data_structure_states.append("delete")
      if( SAFE_TRACE_NAME in x ):
         data_structure_states.append("SAFE")
         return data_structure_states
   f.close()
   
   if data_structure_type == "stack":
      return generate_stack_state(data_structure_states)
   elif data_structure_type == "queue":
      return generate_queue_state(data_structure_states)


#Function that appends a new assert to "checker.c"
def generate_assert_condition(data_structure):
   logging.info()
   if(len(data_structure) == 0):
      return "(is_empty(ss))"
   
   i = 0
   condition = f"(size == {len(data_structure)}"
   for elem in data_structure:
      if(i == len(data_structure)-1):
         condition += f" && c{elem})"
      else:
         condition += f" && c{elem}"
      i+=1
   return condition


def generate_contains(new_items):
   logging.info()
   if(len(new_items) == 0):
      return ""
   lines = ""
   for elem in new_items:
      lines += f"long unsigned int c{elem} = contains(ss,{elem});\n"
   return lines

#Create or expand the assert in checker.c
def create_assert(data_structure):
   with open(f"{BENCHMARK_DIR}/checker.c","r+") as checker:
      newfile_lines = ""
      lines = [line.rstrip('\n') for line in checker.readlines()]
      contains_op = []
      for line in lines:
         
         if "contains" in line:
            contains_op.append(line[ line.index("contains(ss,") + 1 : line.rindex(")")])
         
         if "assert(" in line:
            if "assert(0)" in line:
                  newfile_lines += generate_contains(data_structure)
                  condition = generate_assert_condition(data_structure)
                  newfile_lines += f"assert({condition});\n"
            else:
               new_elements = list(set([data_structure]) - set([contains_op]))
               newfile_lines += generate_contains(new_elements)
               
               assert_closure_index = line.rindex(")") #penultimo character
               assert_condtions = line[:assert_closure_index]
               generated_condition = generate_assert_condition(data_structure)
               assert_condtions += f" || {generated_condition});\n"
               newfile_lines += assert_condtions
         else:
            newfile_lines += f"{line}\n"
         
         checker.seek(0,SEEK_SET)
         checker.truncate(0)
         checker.write(newfile_lines)


def create_checker():
   logging.info()
   with open(f"{BENCHMARK_DIR}/checker.c", "w+") as checker:
      logging.info()
      checker.write("#include <assert.h>\n")
      checker.write("void check(void* ss){\n")
      checker.write("unsigned long int size = get_size(ss);\n")
      checker.write("assert(0);\n") 
      checker.write("}")  


def is_safe(data_structure_state):
   return len(data_structure_state) > 0 and data_structure_state[0] == "SAFE"


def disable_atomic_operations(filename):
   with open(f"{BENCHMARK_DIR}/{filename}","r+") as file:
      lines = ""
      filelines = file.readlines()
      for line in filelines:
         if "int volatile ATOMIC_OPERATION" in line:
            lines += "int volatile ATOMIC_OPERATION = 0;\n"
         else:
            lines += line
      file.truncate(0)
      file.seek(0,SEEK_SET)
      file.write(lines)
   
def run_benchmark(filename,data_structure_type,include_params): 
   create_checker()
   
   # Capture all possible state of this configuration
   while True:
      launch_lazy_cseq(filename,include_params)
      data_structure_state = get_data_structure_state(f"{BENCHMARK_DIR}/_cs_{filename}.cbmc.log",data_structure_type)
      if is_safe(data_structure_state):
         break
      else:
         create_assert(data_structure_state)
   
   # Test with lock-free behaviour
   disable_atomic_operations(filename)
   launch_lazy_cseq(filename,include_params)
   data_structure_state = get_data_structure_state(f"{BENCHMARK_DIR}/_cs_{filename}.cbmc.log",data_structure_type)
   if is_safe(data_structure_state):
      return True
   else:
      return False


# if __name__ == "__main__":
#    include_params = "../liblfds7.1.1/liblfds711/inc"
#    run_benchmark("benchmark_2.c","stack",include_params)