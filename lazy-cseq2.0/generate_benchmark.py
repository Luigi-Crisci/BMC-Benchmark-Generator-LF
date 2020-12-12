import sys
from itertools import product, permutations, combinations

def create_permutation(num_t,num_op):
    array_perm = []
    array_ops = []
    list_perm = []

    #Getting number of ops into an array
    for i in range(0,int(num_op)):
        array_ops.append(i)
    print(array_ops)

    #Creating for each thread the possible combinations of his operations
    for i in range(0, int(num_t)):
       array_perm.append(product(array_ops,repeat=2))
    for i in range(0, len(array_perm)):
        list_perm.append(list(array_perm[i]))
    print(list_perm)



    #Trying to iterate through the elements (Caso base)
    for th1 in list_perm[0]:
        for th2 in list_perm[1]:
            print(th1+th2)



    return list_perm

def create_benchmarks(perm):
    count_thread = 1
    for x in perm:
        for a in x:
            print("void *thread"+str(count_thread)+"{")
            count_thread += 1
            for k in a:
                if(k % 2 == 0):
                    print("insert()")
                else:
                    print("delete()")
            print("}")


if __name__ == "__main__":
    num_thread = sys.argv[1]
    num_op = sys.argv[2]
    perm = create_permutation(num_thread,num_op)
    create_benchmarks(perm)