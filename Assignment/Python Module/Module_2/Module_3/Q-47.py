# Write a Python program to create a dictionary from a string.

string = "name:Kaushik,age:22,course:python"

disctonary = dict(pair.split(':')
    for pair in string.split(','))

print(disctonary)
 
