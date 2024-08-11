#Why Do You Use the Zip () Method in Python?
'''
The zip() function in Python is used to combine elements from two or more iterables (e.g., lists, tuples)
into a single iterable of tuples. Each tuple contains one element from each of the input iterables, grouped by
their positions..
'''
names = ['hello', 'its', 'kaushik']
num = [23, 24,25]

zipped = list(zip(names, num))
print(zipped)
