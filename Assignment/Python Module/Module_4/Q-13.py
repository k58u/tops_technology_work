# Explain Exception handling? What is an Error in Python? 

"""
Exception handling

Exception handling in Python is a way to manage errors that occur during 
the execution of a program. 
It allows you to write code that can deal with errors gracefully, 
rather than crashing the program."""

try:
    number = int(input("Enter a number: "))
    print("You entered:", number)

except ValueError:
    print("This is not a valid number!")

"""
Error in Python

An error in Python is a problem that occurs when the program is running, 
which stops it from completing. 
Errors can be caused by various issues such as syntax mistakes, 
incorrect data types, or missing files.

"""
# if True
    # print("Hello") 
# in this code colon is missing (:).