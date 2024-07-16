# Write a Python program to get the Factorial number of given number. 

number = int(input("Enter a number: "))

result = 1

if number < 0:
    print("Factorial is not defined for negative numbers.")

else:
    for i in range(1, number + 1):
        result *= i
    print(f"The factorial of ",result)
