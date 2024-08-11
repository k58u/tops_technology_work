#Write a Python function to check whether a number is in a given range.

def in_range(number, start, end):
    return number in range(start, end + 1)
print(in_range(5, 1, 20))  
print(in_range(7, 1, 30)) 
