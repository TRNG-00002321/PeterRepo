# 1. Create a dictionary of five countries and their capitals.
# Write a function that takes a country name as input and returns its capital.
from functools import reduce

capitals = {"France": "Paris", "China": "Beijing", "Russia": "Moscow", "Italy": "Rome", "Egypt": "Cairo"}

def findcapitals(country: str):
    if country in capitals:
        return capitals[country]
    else:
        return "Not Listed"


#
# 2. Make a dictionary of student names and their scores.
# Write a function to find the student with the highest score.
#

students = {"Alice": 92, "Bob": 87, "Horse": 3, "Eggbert": 95}

def maxScore(students: dict):
    return reduce(lambda x, y: x if students[x] > students[y] else y, students)

# 3. Create a nested dictionary of three employees, each with keys for name, age, and salary.
# Write a function to give each employee a 10% raise and print the updated dictionary.
#

employees = {
            "emp01":{
                "name": "Bob",
                "age": 20,
                "salary": 41000
            },
            "emp02":{
                "name": "Alice",
                "age": 25,
                "salary": 75000
            },
            "emp03":{
                "name": "John",
                "age": 30,
                "salary": 10
            }
        }

def salaryraiser(employees: dict):
    for i in employees:
        employees[i]["salary"] = round(employees[i]["salary"] * 1.10)
    return employees

# 4. Write a Python program to add a key to a dictionary
# Sample Output
# dictionary = {"Name" : "Ram" , "Age" : 23}
# add_key = {"City" : "Salem"}
# dictionary = {'Name' : 'Ram', 'Age' : 23, 'City' : 'Salem'}
#

def add_key(old_data: dict, new_data: dict):
    for i in new_data:
        old_data[i] = new_data[i]
    return old_data


# 5. Write a Python program to concatenate following dictionaries to create a new one.
# Sample Output
# Dictionary 1 = {"Name" : "Ram" , "Age" : 23}
# Dictionary 2 = {"City" : "Salem", "Gender" : "Male"}
# Concatenate Dictionaries = {'Name' : 'Ram', 'Age' : 23, 'City' : 'Salem', 'Gender': 'Male'}
#

###I accidentally solved this in the last one...


# 6. Write a Python program to check whether a given key already exists in a dictionary.
# Sample Output
# {'Name' : 'Ram', 'Age' : 23,}
# Key = Name
# Key is Available in the Dictionary
#

def keyexists(data: dict, key: str):
    if key in data:
        return True
    return False


# 7. Write a Python program to iterate over dictionaries using for loops.
# Sample Output
# {"Name" : "Ram" , "Age" : 23 , "City" : "Salem", "Gender" : "Male"}
# Name : Ram
# Age : 23
# City : Salem
# Gender : Male

def print_dict(data: dict):
    for i in data:
        print(f"{i} : {data[i]}")


if __name__ == "__main__":
    print("France's capital: ", findcapitals("France"))
    print("Unlisted: ", findcapitals("Azerbaijan"))


    print("Highest scorer: ", maxScore(students))

    print("Exiting employee data: ", employees)
    print("Updated salaries: ", salaryraiser(employees))

    dictionary = {"Name" : "Ram" , "Age" : 23}
    addedk = {"City" : "Salem"}
    print("old dictionary: ", dictionary)
    print("new dictionary: ", add_key(dictionary, addedk))

    d1 = {"Name" : "Ram" , "Age" : 23}
    d2 = {"City" : "Salem", "Gender" : "Male"}

    print("concatenated dictionaries: ", add_key(d1, d2))


    keyfind = {'Name' : 'Ram', 'Age' : 23,}
    key = 'Name'

    if keyexists(keyfind, key):
        print(f"{key} exists in {keyfind}")
    else:
        print(f"{key} does not exist in {keyfind}")

    printd = {"Name" : "Ram" , "Age" : 23 , "City" : "Salem", "Gender" : "Male"}
    print_dict(printd)

