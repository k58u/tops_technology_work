#   What is used to check whether an object o is an instance of class A?

# isinstance(o, A)

class Person1:
    pass

person = Person1()

print(isinstance(person, Person1)) 

print(isinstance(person, object)) 