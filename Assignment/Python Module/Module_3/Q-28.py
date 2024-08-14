#Write a Python program to remove an empty tuple(s) from a list of tuples.

tuples_list = [(1, 2), ( ), (3, 4, 6), ( ), (7,44)]

list = []
for tuple_in in tuples_list:
    if tuple_in:
        list.append(tuple_in)
print(list)
