#   Write a Python program to read last n lines of a file
n = 1

with open("example.txt", "r") as file:
    lines = file.readlines()

    for line in lines[-n:]:
        print(line, end='')
