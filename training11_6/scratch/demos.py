"""
create a python list of numbers, return squares
"""
from functools import reduce


#list comprehension square method
def squarel(arr: []):
    slis = [x*x for x in arr]
    return slis

#using maps
def squarem(arr: []):
    # map applies a lambda function in the first parameter,
    # and an input in the second parameter
    smap = list(map(lambda x: x**2, arr))
    return smap

def evenonly(arr: []):
    #can also do this via list comp
    # eonly = [x for x in arr if x % 2 == 0]
    eonly = list(filter(lambda x: x % 2 == 0, arr))
    return eonly

#take a product of the arrays elements using reduce
def prodarr(arr: []):
    #reduce iteratively applies function to innards
    parr = reduce(lambda x, y: x * y, arr)
    return parr

def nameagezip(name:[], age:[]):
    return list(zip(name, age))

if __name__ == "__main__":
    arr = [1,4,5,6,200]
    print(arr, ", list comp square: ", squarel(arr))
    print(arr, ", map square: ", squarem(arr))

    arr1 = [x for x in range(1, 11)]
    print(arr1, ", evens: ", evenonly(arr1))

    print(arr1, ", product of list: ", prodarr(arr1))

    narr1 = ["Edmond", "Mercedes", "Fernand", "Franz"]
    narr2 = [43, 42, 45]
    zipped = nameagezip(narr1, narr2)
    print(narr1, narr2, ", zipped: ", zipped)
    unz1, unz2 = map(list, zip(*zipped))
    print("unzip: ",unz1, unz2)