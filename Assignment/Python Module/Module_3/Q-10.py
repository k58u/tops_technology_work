# Write a Python program to generate and print a list of first and last 5 
# elements where the values are square of numbers between 1 and 30. 

square = []
for x in range(1, 31):
    square.append(x**2)

first_five = square[:5]
last_five = square[-5:]   

result = first_five + last_five
print(result)
