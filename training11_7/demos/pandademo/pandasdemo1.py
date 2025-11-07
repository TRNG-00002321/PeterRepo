import pandas as pd


mydata = {
    "cars": ["BMW", "Volvo", "Ford", "Toyota"],
    "passings": [3, 7, 2, 4]
}

myframe = pd.DataFrame(mydata)
print(myframe)
print("\n\n")

a = [1, 7, 2, "A"]
myvar = pd.Series(a)
print(myvar)
print(myvar[0])
print(myvar[3])

labvar = pd.Series(a, index = ["x", "y", "z", "w"])

print(labvar)
print(labvar[0])
# print(labvar["x"])

calories = {"day1": 420, "day2": 380, "day3": 390}
dictser = pd.Series(calories)
print(dictser)