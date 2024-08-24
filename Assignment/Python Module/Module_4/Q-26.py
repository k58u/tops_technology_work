#  Explain Inheritance in Python with an example? What is init? Or What 
#  Is A Constructor In Python?

"""
Inheritance is a feature of object-oriented programming where a new class (child class) derives
properties and methods from an existing class (parent class). It allows you to create a new class
based on an existing class, facilitating code reuse and extension

"""
# Example
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        return "Some sound"

class Dog(Animal):
    def speak(self):
        return "Bhaouu BhaOUU"

my_dog = Dog("Lalu")

print(my_dog.name)      
print(my_dog.speak())   

"""
__init__ Method (Constructor in Python)

Purpose: The __init__ method is a special method in Python classes. It is automatically called 
when a new instance of the class is created. It initializes the object's attributes.

Also Known As: Constructor.
"""
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

name = input("Enter your name: ")
age = int(input("Enter your age: "))

person = Person(name,age)

print(person.name)  
print(person.age)   
