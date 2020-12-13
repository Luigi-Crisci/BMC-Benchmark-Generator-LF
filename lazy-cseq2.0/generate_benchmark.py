import sys
from itertools import product, permutations, combinations



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
    id = 0
    string_thread_comb = []
    temp_string = []
    index = 0

    #Iterate through the cartesian product obtained previously and convert it into c code
    for x in perm:
        count_thread = 1
        for thread_seq in x:
            temp_string.append("void *thread"+str(count_thread)+"{\nLOCK;\n")
            count_thread += 1
            for k in thread_seq:
                if(k == 0):
                    temp_string.append("insert("+str(id)+");\n")
                    id+=1
                else:
                    temp_string.append("delete();\n")
            temp_string.append("UNLOCK;\n")
            temp_string.append("}\n")
        string_thread_comb.insert(index,listToString(temp_string))
        temp_string = []
        index+=1

    for x in string_thread_comb:
        print(x)

    generalized = open("../workspace/multithread/generalized.c")

if __name__ == "__main__":
    num_thread = sys.argv[1]
    num_op = sys.argv[2]
    perm = create_permutation(num_thread,num_op)
    create_benchmarks(perm)