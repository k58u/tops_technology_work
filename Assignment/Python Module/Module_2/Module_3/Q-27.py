#Write a Python program to find the repeated items of a tuple.

my_tuple = (1, 2, 2, 3, 3,  4, 4, 5,5,1, 2, 2, 3, 3,  4, 4, 5,5)

items = set()
for item in my_tuple:
    if my_tuple.count(item) > 1:
        items.add(item)

print("Repeated items:", items)
