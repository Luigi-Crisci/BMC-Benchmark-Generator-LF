import subprocess
import sys
from os import SEEK_SET
import re
import io

NUM_ROUNDS = 1
INSERT_TRACE_NAME = "insert_id="
DELETE_TRACE_NAME = "delete_s="
BENCHMARK_DIR = "benchmarks"

#Function to save error trace into a file named "trace.txt" we just have to specify the unwind for lazycseq
#TODO: Add gcc -I param
def launch_lazy_cseq(input_file):
   subprocess.call(["./cseq-feeder.py", "-i", f"{BENCHMARK_DIR}/{input_file}","-I","../liblfds7.1.1/liblfds711/inc"
   ,"--unwind","5","--cex","--debug", "--rounds", f"{NUM_ROUNDS}"])
   
   
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
   data_structure = []
   for state in state_list:
     if state == "delete":
         if len(data_structure) == 0:
            continue
         del data_structure[len(data_structure)-1]
   else:
      data_structure.insert(0,state)
   return data_structure


#Function to read from "trace.txt" and extract the number of pushes and pops. It also save the data structure state (at the end of the program)
#into another data structure and return it
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

   if data_structure_type == "stack":
      return generate_stack_state(data_structure_states)
   elif data_structure_type == "queue":
      return generate_queue_state(data_structure_states)

#Function that appends a new assert to "checker.c"

def generate_assert_condition(data_structure):
   if(len(data_structure) == 0):
      return "(is_empty(ss))"
   
   i = 0
   print(data_structure)
   condition = f"(size == {len(data_structure)})"
   for elem in data_structure:
      if(i == len(data_structure)-1):
         condition += f" && (contains(ss,{elem}))"
      else:
         condition += f" && contains(ss,{elem})"
      i+=1
   return condition


#Create or expand the assert in checker.c
def create_assert(data_structure):
   with open(f"{BENCHMARK_DIR}/checker.c","r+") as checker:
      newfile_lines = ""
      lines = [line.rstrip('\n') for line in checker.readlines()]
      for line in lines:
         if "assert(" in line:
            # Caso base
            if "assert(0)" in line:
                  condition = generate_assert_condition(data_structure)
                  newfile_lines += f"assert({condition});\n"
            else:
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
   with open(f"{BENCHMARK_DIR}/checker.c","w+") as checker:
      checker.write("#include <assert.h>\n")
      checker.write("void check(void* ss){\n")
      checker.write("unsigned long int size = get_size(ss);\n")
      checker.write("assert(0);\n") 
      checker.write("}")  

def is_safe(data_structure_state):
   return len(data_structure_state) == 0

def run_benchmark(filename,data_structure_type): 
   create_checker()
   while True:
      launch_lazy_cseq(filename)
      data_structure_state = get_data_structure_state(f"{BENCHMARK_DIR}/_cs_{filename}.cbmc.log",data_structure_type)
      if is_safe(data_structure_state):
         break
      else:
         create_assert(data_structure_state)
      
   #TODO: Launch last test



if __name__ == "__main__":
    run_benchmark("benchmark_0.c","stack")