#Write a Python program to replace last value of tuples in a list.

tuples = [(1, 2, 3), (4, 5, 6), (7, 8, 9)]

new_value = 23

updated_list = [(t[0], t[1], new_value) for t in tuples]

print(updated_list)
