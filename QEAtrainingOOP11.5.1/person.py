class Person:
    #constructor class
    #params: string name, int age, int ears
    def __init__(self, name = "John", age = 25, ears = 2, fingers = 10):
        self.name = name
        self.age = age
        self.ears = ears
        self.fingers = fingers

    #method greet
    #print out a greeting based on name value and ears value
    def greet(self):
        print(f'Hello, my name is {self.name}, and I have {self.ears} ears!')

    def __str__(self):
        return f'{self.name}, {self.age} years old, {self.ears} ears, {self.fingers} fingers'


p1 = Person("John", 25)
p1.greet()
print(p1)

