#Write a Python function to calculate the factorial of a number (a nonnegative integer)

def factorial(num):
    return 1 if num == 0 else num * factorial(num - 1)

number = input("Enter a non-negative integer: ")
if number.isdigit():
    number = int(number)
    if number >= 0:
        print(f"The factorial of {number} is {factorial(number)}")
    else:
        print("The number must be non-negative.")
else:
    print("Error Please enter a non-negative integer.")
