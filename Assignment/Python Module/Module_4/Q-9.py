#   Write a Python program to count the number of lines in a text file. 

file = open("example.txt", 'r')

line_count = 0

for line in file:
    line_count += 1

file.close()

print("Number of lines:", line_count)
