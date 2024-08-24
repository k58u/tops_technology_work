#  What is File function in python? What is keywords to create and write file. 
'''
In Python, a file function typically refers to functions that allow you to 
work with files—such as creating, reading, writing, and closing files.

Keywords to Create and Write a File:
open(): This function is used to open a file. You can specify the file name and 
the mode in which you want to open the file.

write(): This function is used to write data to a file.

Example:
# Create and open a file in write mode
'''
file = open("example.txt", "w")

# Write some text to the file

file.write("Hello python I am Kaushik.")

# Close the file to save the changes

file.close()

'''
Explanation:

open("example.txt", "w"): This opens the file named example.txt in write mode ("w"). If the file doesn’t exist, it will be created. If it does exist, it will be overwritten.
file.write("Hello, this is a test file."): This writes the specified text to the file.
file.close(): This closes the file, saving any changes made.
'''