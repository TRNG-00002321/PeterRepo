"""
Given three inputs that are stored in the variables a, b, and c.
You need to print a a times and b b times  in a single line separated by c.
"""

a = input("enter value of a\n")
b = input("enter value of b\n")
c = input("enter value of c\n")
for i in range(int(a)):
    print(a, end="")
print(c, end="")
for i in range(int(b)):
    print(b, end="")