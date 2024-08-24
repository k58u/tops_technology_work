#  Write a Python program to read a file line by line store it into a variable. 

file = open("example.txt", 'r')

file_data = ""

for line in file:
    file_data += line

file.close()

print(file_data)
