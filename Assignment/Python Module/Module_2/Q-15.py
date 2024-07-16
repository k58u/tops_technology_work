#  Write a Python program to count occurrences of a substring in a string.

input_string = input("Enter a string: ")
substring = input("Enter a substring to count: ")

count = input_string.count(substring)

print(f"The substring '{substring}' appears {count} times in the string.")
