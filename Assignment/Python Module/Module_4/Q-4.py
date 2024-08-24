#  Write a Python program to read first n lines of a file. 

n = 1

file = open("example.txt", "r")

for i in range(n):
    line = file.readline()
    print(line, end='')

file.close()
