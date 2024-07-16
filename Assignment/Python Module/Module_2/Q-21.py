#  Write a Python function to reverses a string if its length is a multiple of 4. 

string = input("Enter a string: ")

if len(string) % 4 == 0:
    rev_str = string[::-1]  #slicing
    print("Reversed string:", rev_str)
else:
    print("String length is not a multiple of 4")