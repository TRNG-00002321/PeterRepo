
import os

#ue thi to join path variable with fle name if needed
path = os.path.join("","example.txt")


with open(path, "r") as file:
    print(file.read())

#wrting time
with open("output.txt", "w") as file:
    file.write("This is the first line.\n")
    file.write("This will overwrite any existing content.\n")

with open("output.txt", "a") as file:
    file.write("this line is appended.\n")


#x mode, create file but doesnt work if already existing
try:
    with open("newfile.txt", "x") as file:
        file.write("this file was just created.")
except FileExistsError:
    print("file already exists")


#write multiple line with writelines()
lines = ["Line 1\n", "Line 2\n", "Line 3\n"]
with open("multilines.txt", "w") as file:
    file.writelines(lines)


#Can also writ formatted strings to files
name = "Alice"
score = 95

with open("report.txt", "w") as file:
    file.write(f"Student: {name}\nScore: {score}\n")


    #writing binary:
#wb mode

data = bytes([120,3,255,0,100])
with open("binary.dat","wb") as file:
    file.write(data)