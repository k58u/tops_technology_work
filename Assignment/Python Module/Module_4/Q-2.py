#   Write a Python program to read an entire text file. 

file = open("example.txt", "r")

content = file.read()

print(content)

file.close()