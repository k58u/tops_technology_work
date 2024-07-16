# Write a Python program to get a string made of the first 2 and the last 
# 2 chars from a given a string. If the string length is less than 2, return 
# instead of the empty string. 

string = input("Enter a string: ")

if len(string) < 2:
    result = " "  
else:
    first_two = string[:2]  
    last_two = string[-2:]  
    result = first_two + last_two  

print("Result:", result)
