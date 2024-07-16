# Write python program that swap two number with temp variable and 
# without temp variable. 

a = 50
b = 10
print(f"printing values a = {a} and b = {b}")

temp = a
a = b
b = temp

print(f"After swapping  a = {a}, b = {b}")



# without using temp variable 


print(f"befor swap a = {a} and b = {b}")

a, b = b, a

print(f"After swapping without temp variable a = {a}, b = {b}")