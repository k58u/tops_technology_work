# Write a Python program to find the second smallest number in a list. 

num = [10, 25, 30, 40, 55, 60, 83]

unique_numbers = sorted(set(num))

if len(unique_numbers) >= 2:
    print("The second smallest number is:", unique_numbers[1])
else:
    print("There are not enough unique numbers")