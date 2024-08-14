#Write a Python program to print all unique values in a dictionary.

dict = {'a': 10, 'b': 10, 'c': 33, 'd': 54, 'e': 2}

unique_values = set(dict.values())

print("Unique Values:", unique_values)
