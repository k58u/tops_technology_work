#  Write python program that user to enter only odd numbers, else will
#  raise an exception.


try:
    number = int(input("Enter an odd number: "))
    if number % 2 == 0:
        raise ValueError("The number is not odd.")
except ValueError as e:
    print(f"Error: {e}")
else:
    print(f"You entered an odd number: {number}")
finally:
    print("Thank you for using python")
