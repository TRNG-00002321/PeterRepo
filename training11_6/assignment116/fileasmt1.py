#Script to copy content from 1 text file to another

with open("source.txt", "r") as f:
    data = f.readlines()


with open("target.txt", "w") as f:
    f.writelines(data)

