#3 steps
"""
open
read/write
close
"""

#r is for read mode, default
#w is for create/overwrite mode
#a is for append mode
#x is for create only, fails if file exists
#b is for binary mode
#t is for text mode, also default
file = open("example.txt", "r")
content = file.read()
print(content)
file.close()

#no longer required to close the file using the with block
#with handles close
with open("example.txt", "r") as file:
    content = file.read()
    # print(content)

#readlin(): reads only one line
with open("example.txt", "r") as file:
    line1 = file.readline()
    line2 = file.readline()
    print(line1, line2)
    # print(content)

#readlines() reads lines into a list
with open("example.txt", "r") as file:
    lines = file.readlines()
    print(lines)
    #practical example, use comprehensions to earch file, for example search
    #for line containing ERROR in log file


with open("example.txt", "r") as file:
    for line in file:
        print(line.strip())



#what if we have an enormous file?
#read chunks
with open("example.txt", "r") as file:
    while chunk := file.read(1024): #read this many characters
        print(chunk)

