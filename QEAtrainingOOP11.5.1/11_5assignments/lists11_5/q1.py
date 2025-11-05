"""
Create a list that contains integers. You need to return the sum of the list.
"""

def listSum(ls = []):
    # return sum(ls)
    sum = 0
    for i in ls:
        sum += i
    return sum
print(listSum([1,2,3,4,5]))

