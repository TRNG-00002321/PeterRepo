"""

You are given an array arr[] of size n.
You have to insert all elements of arr[] into a set and return that set .
You are also given a interger x.
If x is found in set then erase it from set and print "erased x", otherwise, print "not found".

"""


def seterase(arr: [], era: int):
    nset = set()
    for i in arr:
        nset.add(i)
    if era in nset:
        print(f"erased {era}")
        nset.remove(era)
    else:
        print(f"not found")
    return nset


print(seterase([1,2,3,4,4,4,4,6,7,8], 9))
print(seterase([1,2,2,3,8,8,9,1,2,0,8], 2))