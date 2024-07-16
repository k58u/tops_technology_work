# Write a Python program to test whether a passed letter is a vowel or 
# not.


vowels = ['a', 'e', 'i', 'o', 'u']

letter = input("Enter a letter: ")

if letter in vowels:
    print("The letter is a vowel.")
else:
    print("The letter is not a vowel.")
