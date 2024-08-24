#  How Do You Handle Exceptions With Try/Except/Finally In Python? 
# Explain with coding snippets.

"""
1. try Block:
The code that might raise an exception goes in the try block.

2. except Block:
If an exception occurs in the try block, the code in the except block runs to handle the error.

3. finally Block:
The finally block runs no matter what—whether an exception occurred or not.

Example:

try:
    x = 10 / 0  # raise a ZeroDivisionError

except ZeroDivisionError:
    print("Caught a division by zero!")
    
finally:
    print("This will always run, no matter what.")

"""