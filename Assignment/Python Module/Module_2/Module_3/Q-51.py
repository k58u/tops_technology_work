#Write a Python function that checks whether a passed string is palindrome or not

def is_palindrome():
    string = input("Enter a string: ").lower().replace(" ", "")
    return string == string[::-1]
if is_palindrome():
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
