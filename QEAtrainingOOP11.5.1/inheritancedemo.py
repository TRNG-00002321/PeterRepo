

class Animal:
    def speak(self):
        print("I am an Animal")


class Dog(Animal):
    def speak(self):
        print("woof")


class Eagle(Animal):
    def speak(self):
        print("SKRAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA")


d=Dog()
d.speak()
e=Eagle()
e.speak()