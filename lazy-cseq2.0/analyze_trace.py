import subprocess
import sys
import os
import re
import io

#Function to save error trace into a file named "trace.txt" we just have to specify the unwind for lazycseq
def save_trace():
   f = open("trace.txt","w")
   subprocess.call(["./cseq-feeder.py", "-i", "../workspace/multithread/stack_with_while.c","-I","../liblfds7.1.1/liblfds711/inc"
   ,"--unwind","4","--cex"],stdout=f)


#Function to read from "trace.txt" and extract the number of pushes and pops. It also save the data structure state (at the end of the program)
#into another data structure and return it
def read_file(pathname):
   temp = []
   count = -1
   temp2 = []
   f = open("trace.txt","r")
   lines = [line.rstrip('\n') for line in f]
   #Iterate through the trace and find the lines in which there are pushes and pops
   for x in lines:
      if(".user_id=" in x):
         if (x.endswith("l")):
            index = x.index(".user_id=")
            temp.append("push")
            temp.append(x[index:len(x)-3])
      if("user_id;" in x):
         temp.append("pop")
   
   #print(temp)

   for x in temp:
      count+=1
      if x == "push":
         temp2.insert(len(temp2),temp[count+1])
      if x == "pop":
         del temp2[len(temp2)-1]

   return temp2


#Create the assert into a c file named "checker.c"
def create_assert(data_structure):
   #print(data_structure)

   #data_structure = [".user_id=0",".user_id=1",".user_id=5"]
   #Dropping useless part of the string
   new_data = [x.replace(".user_id=","") for x in data_structure]
   #print(new_data)

   #Building new_data as a string of the elements in the correct order
   new_data = ''.join(new_data)
   #print(new_data)
   count=0

   #if file "checker.c" already exists we iterate through the lines and compare each assert with the actual data
   if os.path.exists("../workspace/multithread/checker.c"):
      checker = open("../workspace/multithread/checker.c","r+")
      lines = [line.rstrip('\n') for line in checker]
      for x in lines:
         if "assert(" in x:
            index1 = x.index("(")
            index2 = x.index(")")
            if new_data == x[index1+1:index2]:
               break
         count+=1
      #print(count)
      #print(len(lines))
      if(count == len(lines)):
         checker.seek(0,io.SEEK_END)
         checker.write("\nassert(")
         checker.write(new_data)
         checker.write(");")
      checker.close()
   #if "checker.c" doesn't exist then there's no assert and we create first assert with the actual data
   else:
      checker = open("../workspace/multithread/checker.c","w+")
      checker.write("#include <assert.h>\n")
      checker.write("assert(")
      checker.write(new_data)
      checker.write(");") 
      checker.close()
       
  





if __name__ == "__main__":
    save_trace()
    data = read_file("trace.txt")
    create_assert(data)