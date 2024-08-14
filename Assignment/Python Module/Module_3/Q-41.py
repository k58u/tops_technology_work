#Write a Python program to combine two dictionary adding values for common keys.
#d1= {'a': 100, 'b': 200, 'c':300} o d2 = {'a': 300, 'b': 200,’d’:400}

d1 = {'a': 100, 'b': 200, 'c': 300}
d2 = {'a': 300, 'b': 200, 'd': 400}

for key, value in d2.items():
    d1[key] = d1.get(key, 0) + value

print("Combined Dictionary:", d1)
