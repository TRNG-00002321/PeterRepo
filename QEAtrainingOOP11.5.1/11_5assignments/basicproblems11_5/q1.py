"""Given two inputs that are stored in variables a and n, you need to print a,
n times in a single line without space between them. Output must have a newline at the end."""



a = input("enter variable a\n")
n = input("enter variable n\n")
output = " ".join([a] * int(n))
print(output)