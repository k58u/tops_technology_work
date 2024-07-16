# Write a Python program to count the number of characters (character 
# frequency) in a string 

string = input("Enter a string: ")

for char in frozenset(string):
    # if char != ' ': // for count space (space ne ) 

        print(f"Character '{char}' is {string.count(char)} times")
