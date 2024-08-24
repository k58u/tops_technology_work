# How to Define a Class in Python? What Is Self? Give An Example Of 
# A Python Class
 
"""
To define a class in Python, you use the class keyword followed by the class name and a colon. 
Inside the class, you define methods and attributes.

self Keyword:

self refers to the instance of the class. It is used to access attributes and methods associated with the current object.

"""

class Bike:
    def __init__(self, name):
        self.bike_name = name

    def display(self):
        print(self.bike_name)

b1 = Bike("SP125")
b1.display()

b2 = Bike("Honda")
b2.display()