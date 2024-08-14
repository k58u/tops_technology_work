#Write a Python program to calculate surface volume and area of a cylinder.

pi = 3.14

radius = float(input("Enter the radius of the cylinder: "))
height = float(input("Enter the height of the cylinder: "))

volume = pi * (radius ** 2) * height

surface_area = 2 * pi * radius * (radius + height)

print(f"The volume of the cylinder is: {volume:.2f}")
print(f"The surface area of the cylinder is: {surface_area:.2f}")
