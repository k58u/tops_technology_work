#Write a Python program to find the maximum and minimum numbers from the specified decimal numbers.

input = input("Enter decimal numbers : ")

num= [float(num) for num in input.split()]

max_num = max(num)
min_num = min(num)

print(f"The maximum number is: {max_num}")
print(f"The minimum number is: {min_num}")
