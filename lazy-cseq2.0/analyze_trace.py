import subprocess
import sys
import os
import re
import io
import ctypes

#Function to save error trace into a file named "trace.txt" we just have to specify the unwind for lazycseq
def save_trace():
   subprocess.call(["./cseq-feeder.py", "-i", "../workspace/multithread/generalized.c","-I","../liblfds7.1.1/liblfds711/inc"
   ,"--unwind","4","--cex","--debug"])
   f = open("trace.txt","w")
   subprocess.call(["cbmc",  "--unwind", "1", "--no-unwinding-assertions", "--32", "../workspace/multithread/_cs_generalized.c", "--stop-on-fail"],stdout=f)
   f.close()

#Function to read from "trace.txt" and extract the number of pushes and pops. It also save the data structure state (at the end of the program)
#into another data structure and return it
def read_file(pathname):
   temp = []
   count = 0
   temp2 = []
   f = open("trace.txt","r")
   lines = [line.rstrip('\n') for line in f]
   #Iterate through the trace and find the lines in which there are pushes and pops
   for x in lines:
      #if(".user_id=" in x):
      if("insert_id" in x):
         #if (x.endswith("l")):
         temp.append("push")
      #if("user_id;" in x):
      if("delete_id_popped" in x):
         temp.append("pop")
   
   print(temp)


#Gestire in base alla struttura dati
   for x in temp:
      if x == "push":
         temp2.insert(len(temp2),count)
         count+=1
      if x == "pop":
         del temp2[len(temp2)-1]
   return temp2

#Function that appends a new assert to "checker.c"
def append_assert(data_structure):
   i = 0
   line_help = ") || (get_size(ss) == "+str(len(data_structure))+")"
   for elem in data_structure:
      line_help += " && contains(ss,"+str(data_structure[i])+")"
      i+=1
      if(i == len(data_structure)-1):
         line_help += " && contains(ss,"+str(data_structure[i])+"))"
         break
   line_help += ");\n"
   return line_help


#Create the assert into a c file named "checker.c"
def create_assert(data_structure):

   #Function necessary to pass data_structure to c function
   #lib = ctypes.cdll.LoadLibrary('../workspace/multithread/checker.so')
   #fun = lib.assert_create
   #arr = (ctypes.c_int * len(data_structure))(*data_structure)
   #fun(arr)
   #print(arr)
   newfile_lines = ""

   #if file "checker.c" already exists we iterate through the lines and compare each assert with the actual data
   if os.path.exists("../workspace/multithread/checker.c"):
      checker = open("../workspace/multithread/checker.c","r")
      lines = [line.rstrip('\n') for line in checker]
      # Caso base
      if "assert(0);" in lines:
         for x in lines:
            #If we find "assert(0)"" this is the first time we iterate through "checker.c" so we overwrite "assert(0)" with a new assert
            if "assert(0);" in x:
               if(not data_structure):
                  newfile_lines += "assert((is_empty(ss)));\n"
               else:
                  line_help = append_assert(data_structure)
                  newfile_lines += line_help
            else:
               newfile_lines += x+"\n"
         checker.close()
         checker = open("../workspace/multithread/checker.c","w")
         checker.write(newfile_lines)
         newfile_lines = ""
         checker.close()
      else:
         for x in lines:
            #if we are at the end of the file we append the new assert overwriting "}" and then rewrite "}" to the next line
            if "assert(" in x:
               index1 = x.index(")")
               line_help = x[:index1+1] 
               line_help += append_assert(data_structure)
               newfile_lines += line_help
            else:
               newfile_lines += x+"\n"
         checker.close()
         checker = open("../workspace/multithread/checker.c","w")
         checker.write(newfile_lines)
         checker.close()

   #if "checker.c" doesn't exist then there's no assert and we create first assert with the actual data
   else:
      checker = open("../workspace/multithread/checker.c","r")
      checker.write("#include <assert.h>\n")
      checker.write("include <stdio.h>\n")
      checker.write("include <stdlib.h>\n")
      checker.write("void create_assert(void* ss, int size){\n")
      checker.write("assert(0);\n") 
      checker.write("}")
      checker.close()


   

if __name__ == "__main__":
    save_trace()
    data = read_file("trace.txt")
    create_assert(data)