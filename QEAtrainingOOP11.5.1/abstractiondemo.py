import math
from abc import ABC, abstractmethod
"""
Author: Peter McGuinness
Abtraction Demo

"""

class Shape2D(ABC):
    #this is a decorator which changs the methods footprint
    @abstractmethod
    def area(self):
        pass
    @abstractmethod
    def perimeter(self):
        pass


class Circle(Shape2D):
    def __init__(self, radius):
        self.radius = radius
    def area(self):
        return math.pi * self.radius**2
    def perimeter(self):
        return self.radius * 2 * math.pi

class Rectangle(Shape2D):
    def __init__(self, length, width):
        self.length = length
        self.width = width
    def area(self):
        return self.width * self.length
    def perimeter(self):
        return self.width * 2 + self.length * 2
class IsoscelesTriangle(Shape2D):

    def __init__(self, base, height):
        self.base = base
        self.height = height


    def area(self):
        return (self.base * self.height) /2

    def perimeter(self):
        return self.base + 2 * ((self.base ** 2) + (self.height ** 2))** 0.5

class Triangle(Shape2D):
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def area(self):
        s =  0.5 * self.perimeter()
        return (s * (s - self.a) *(s - self.b) * (s - self.c))**0.5
    def perimeter(self):
        return self.a + self.b + self.c


circler = input("Circle Radius\n")
c1 = Circle(int(circler))
rectl = input("Rectangle length\n")
rectw = input("Rectangle width\n")
r1 = Rectangle(int(rectl), int(rectw))
ta = input("Triangle side 1\n")
tb = input("Triangle side 2\n")
tc = input("Triangle side 3\n")
t1 = Triangle(int(ta), int(tb), int(tc))

print(f"circle area: {c1.area()}")
print(f"rectangle area: {r1.area()}")
print(f"triangle area: {t1.area()}")
#doesnt work because abstract
#shape = Shape2D()
