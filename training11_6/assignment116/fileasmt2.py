#script to copy data from one image to another

with open("source.png", "rb") as f:
    data = f.readlines()


with open("target.png", "wb") as f:
    f.writelines(data)

