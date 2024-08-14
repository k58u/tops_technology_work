#Write a Python program to calculate the area of a trapezoid.

base1 = float(input("Enter the length of the  base_1 : "))
base2 = float(input("Enter the length of the  base_2 : "))
height = float(input("Enter the height (h): "))

area = 0.5 * (base1 + base2) * height

print(f"The area of the trapezoid is: {area}")
