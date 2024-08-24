#   Write a Python program to write a list to a file. 

items = ["apple", "banana", "cherry"]

file = open("items.txt", 'w')

for item in items:
    file.write(item + "\n")

file.close()
