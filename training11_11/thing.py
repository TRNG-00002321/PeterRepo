
n = input()
arr = n.split(" ")
newarr = [int(x) for x in arr]
newarr.sort()

smallest = newarr[0]
second = newarr[len(newarr)-2]
print((smallest*second)+(second/smallest))