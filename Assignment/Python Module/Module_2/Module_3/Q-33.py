#Write a Python script to concatenate following dictionaries to create a new one.

dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}

new_dict = {}
for dict in (dict1, dict2):
    new_dict.update(dict)

print("Concatenated Dictionary:", new_dict)
