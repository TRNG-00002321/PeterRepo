"""

Given a number n, find the first digit of the number.
"""



def digitone(a):
    s = str(a)
    s = s[0]
    return s

inp = int(input("enter a number\n"))
print(digitone(inp))