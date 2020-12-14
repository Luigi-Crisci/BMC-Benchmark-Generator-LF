from io import SEEK_SET
import sys
import subprocess
from itertools import product
from optparse import OptionParser
import analyze_trace

num_thread = 0
num_op = 0
data_structure_type = ""
interface_path = ""
include_params = ""
name = ""
rounds = 1

# Function to convert   
def listToString(s):
    # initialize an empty string 
    str1 = " " 
    # return string   
    return (str1.join(s)) 


def create_permutation(num_t,num_op):

    array_ops = [0,1]
    array_perm = []
    list_perm = []
    thread_comb = []
    

    #Creating for each thread the possible combinations of his operations
    for i in range(0, int(num_t)):
       array_perm.append(product(array_ops,repeat=int(num_op)))
    for i in range(0, len(array_perm)):
        list_perm.append(list(array_perm[i]))

    #Thread's operations cartesian product 
    for x in list_perm:
        thread_comb = product(x,repeat=int(num_t))


    return thread_comb

#Function to write into "generalized.c" a possible configuration of threads
def create_benchmarks(perm):
    string_thread_comb = []
    temp_string = []
    index = 0

    #Iterate through the cartesian product obtained previously and convert it into c code
    for x in perm:
        id = 0
        count_thread = 1
        for thread_seq in x:
            temp_string.append("void *thread"+str(count_thread)+"(){\n")
            count_thread += 1
            for k in thread_seq:
                temp_string.append("LOCK;\n")
                if(k == 0):
                    temp_string.append("insert(ss,"+str(id)+");\n")
                    id+=1
                else:
                    temp_string.append("delete(ss);\n")
                temp_string.append("UNLOCK;\n")
            temp_string.append("}\n")
        string_thread_comb.insert(index,(listToString(temp_string),id))
        temp_string = []
        index+=1

    
    generalized = open("templates/template.c","r")
    for i in range(len(string_thread_comb)):
        filename = f"benchmark_{i}.c"
        file_result = open(f"benchmarks/{filename}","w+")
        
        for line in generalized.readlines():
            if line.__contains__("// INTERFACE GOES THERE\n"):
                file_result.write(f"#include \"{interface_path}\"\n")
                continue
            if line.__contains__("//TYPE DEC\n"):
                file_result.write(f"{name}* ss;\n")
                continue
            if line.__contains__("// THREAD GOES THERE\n"):
                file_result.write(string_thread_comb[i][0])
                continue
            if line.__contains__("//THREAD CREATION GOES THERE\n"):
                # Write declaration
                file_result.write("pthread_t ")
                for j in range(1,num_thread+1):
                    if j == num_thread:
                        file_result.write(f"t{j};\n")
                    else:
                        file_result.write(f"t{j},")

                # Write pthread generation
                for j in range(1,num_thread+1):
                    file_result.write(f"pthread_create(&t{j}, NULL, thread{j}, NULL);\n")
                
                # Write pthread join
                for j in range(1,num_thread+1):
                    file_result.write(f"pthread_join(t{j}, 0);\n")
                continue
            file_result.write(line)
        file_result.close()
        # generalized.close()
        
        if not analyze_trace.run_benchmark(filename,data_structure_type,include_params,string_thread_comb[i][1],name,rounds):
            print(f"Error found with {filename} benchmark. Please see checker.c and the related log to find out more")
            sys.exit(1)

        generalized.seek(0,SEEK_SET)
    generalized.close()


    # for i in range(len(string_thread_comb)):
    #     filename = f"benchmark_{i}.c"
    #     if not analyze_trace.run_benchmark(filename,data_structure_type,include_params):
    #         print(f"Error found with {filename} benchmark. Please see checker.c and the related log to find out more")
    #         sys.exit(1)
    
        
if __name__ == "__main__":

    parser = OptionParser("usage: %prog -t 2 -o 2 -p -s -I")

    parser.add_option("-t", "--num-thread", dest="num_thread",
                  help="set number of thread", metavar="number")

    parser.add_option("-o", "--num-op", dest="num_op",
                  help="set number of operations", metavar="number")
    
    parser.add_option("-r", "--num-rounds", dest="rounds",
                  help="set number of rounds", metavar="number")

    parser.add_option("-p", "--path-interface", dest="interface_path",
                  help="set path for interface", metavar="string")

    parser.add_option("-s", "--data-structure", dest="data_structure_type", default="stack",
                  help="set data structure type<stack|queue>", metavar="string")

    parser.add_option("-I", "--include-params", dest="include_params",
                  help="params to include", metavar="string")

    parser.add_option("-N", "--name-structure", dest="name_structure",
        help="structure name", metavar="string")

    (options, args) = parser.parse_args()

    num_thread = int(options.num_thread)
    num_op = int(options.num_op)
    interface_path = options.interface_path
    data_structure_type = options.data_structure_type
    include_params = options.include_params
    name = options.name_structure
    rounds = options.rounds

    perm = create_permutation(num_thread,num_op)
    subprocess.call(["rm","-fr","benchmarks"])
    subprocess.call(["mkdir","-p","benchmarks/logDir"])
    create_benchmarks(perm)