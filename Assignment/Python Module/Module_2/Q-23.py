# Write a Python function to insert a string in the middle of a string.

str =input("Enter a String:")
insert = input("Enter a string to insert:")

middle = len(str) // 2

result = str[:middle] + insert + str[middle:]#slicing

print(result)