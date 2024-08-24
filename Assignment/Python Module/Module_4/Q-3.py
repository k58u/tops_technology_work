#  Write a Python program to append text to a file and display the text. 

file = open("example.txt", "a")

file.write("\nThis is the appended text.")

file.close()

file = open("example.txt", "r")

content = file.read()
print(content)

file.close()
