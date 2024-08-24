#  How many except statements can a try-except block have? Name Some 
# built-in exception classes:

"""
A try-except block in Python can have multiple except statements. There's no fixed limit, 
so you can handle as many different exceptions as you need by specifying multiple except clauses.


syntax:

try:
    //code
except valueerror:
    //handle error
except zerovisionerror:
    //handle error
except typeerror:
    //handel type error

Some Common Built-in Exception Classes:

1  ValueError: Raised when a function gets an argument of the right type but inappropriate value.

2  TypeError: Raised when an operation or function is applied to an object of inappropriate type.

3  ZeroDivisionError: Raised when dividing by zero.

4  IndexError: Raised when a sequence subscript is out of range.

5  KeyError: Raised when a dictionary key is not found

"""