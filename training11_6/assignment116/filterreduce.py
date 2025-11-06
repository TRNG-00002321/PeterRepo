"""
Filter and Reduce Assignment
1. Filter Strings by Length
Given a list of strings, use filter() to create a new list containing only the strings with a length greater than 5.
Example
words = ["apple", "banana", "cat", "dog", "elephant", "frog"]

2. Filter Students by Grade
Given a list of dictionaries, where each dictionary represents a student with name and grade keys, use filter() to extract students with a grade of 90 or higher.
Example
students = [
    {"name": "Alice", "grade": 85},
    {"name": "Bob", "grade": 92},
    {"name": "Charlie", "grade": 78},
    {"name": "David", "grade": 95}
]

3. Concatenate Strings
Given a list of strings, concatenate them into a single string using reduce.
Example :
	words = ["Python", "is", "awesome", "!"]

4. Find the Maximum Element
Given a list of numbers, find the maximum element using reduce.
Example:
	numbers = [10, 3, 25, 7, 18]

5. Flatten a List of Lists
Given a list of lists, flatten it into a single list using reduce.
Example:
	list_of_lists = [[1, 2], [3, 4], [5, 6]]
"""
from functools import reduce


def filter_by_len(strl: [], flen : int):
    fwords = filter(lambda x: len(x) > flen, strl)
    return list(fwords)


def filter_by_grade(stu: [], grade: int):
    fstu = filter(lambda x: x["grade"] >= grade, stu)
    return list(fstu)

def str_concat(wordlist: [], sep = ""):
    newword = reduce(lambda x, y: x + sep + y, wordlist)
    return newword

def max_elem(numlist: []):
    maxe = reduce(lambda x, y: x if x > y else y, numlist)
    return maxe

def flatten(listlist: []):
    flatline = reduce(lambda x, y: x + y, listlist)
    return flatline


if __name__ == "__main__":
    #1: string filter
    lenarr = ["apple", "banana", "cat", "dog", "elephant", "frog"]
    print("unfiltered", lenarr)
    flenarr = filter_by_len(lenarr, 5)
    print("greater than 5: ", flenarr)
    print("\n")

    #2: dict filter
    students = [
        {"name": "Alice", "grade": 85},
        {"name": "Bob", "grade": 92},
        {"name": "Charlie", "grade": 78},
        {"name": "David", "grade": 95}
    ]
    print("unfiltered: ", students)
    fstu = filter_by_grade(students, 90)
    print("A students:", fstu)
    print("\n")


    #3: string reduce
    words = ["Python", "is", "awesome", "!"]
    print("unreduced: ", words)
    bigword = str_concat(words)
    print("combined: ", bigword)
    spacedword = str_concat(words, " ")
    print("spaced too: ", spacedword)
    print("\n")


    #4 int max with reduce
    nums = [10, 3, 25, 7, 18]
    print("array: ", nums)
    biggest = max_elem(nums)
    print("highest value: ", biggest)
    print("\n")


    #5 list flattener
    listlist = [[1, 2], [3, 4], [5, 6]]
    print("unflattened: ", listlist)
    flatlist = flatten(listlist)
    print("flattened: ", flatlist)