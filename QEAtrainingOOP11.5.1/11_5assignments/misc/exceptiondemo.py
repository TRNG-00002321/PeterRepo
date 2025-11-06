#write python program to input 2 numbers
#calculate and display the division

try:
    x = int(input("value of x\n"))
    y = int(input("value of y\n"))
    print(x // y)
except ZeroDivisionError:
    print("dont divide by zero")
except ValueError:
    print('invalid input')
finally:
    print("get me outta here")




