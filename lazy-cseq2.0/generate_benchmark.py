from io import SEEK_SET
import sys
import subprocess
from itertools import product

num_thread = 0
num_op = 0
data_structure_type = ""

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
    #print(list_perm)

    #Thread's operations cartesian product 
    for x in list_perm:
        thread_comb = product(x,repeat=int(num_t))
    #print(help)


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
        string_thread_comb.insert(index,listToString(temp_string))
        temp_string = []
        index+=1

    # print(string_thread_comb[0])
    for x in string_thread_comb:
        print(x)

    generalized = open("../workspace/multithread/template.c","r")
    for i in range(len(string_thread_comb)):
        file_result = open(f"benchmarks/benchmark_{i}.c","w+")
        for line in generalized.readlines():
            if line.__contains__("// THREAD GOES THERE\n"):
                file_result.write(string_thread_comb[i])
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
        
        # Launch benchmark on current benchmark_file.c
        
        
        generalized.seek(0,SEEK_SET)
    generalized.close()
        
        
if __name__ == "__main__":
    num_thread = int(sys.argv[1])
    num_op = int(sys.argv[2])
    data_structure_type = "stack"
    perm = create_permutation(num_thread,num_op)
    subprocess.call(["rm","-fr","benchmarks"])
    subprocess.call(["mkdir","benchmarks"])
    create_benchmarks(perm)