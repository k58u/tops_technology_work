# Input three integers from user
a = int(input("Enter the a: "))
b = int(input("Enter the b: "))
c = int(input("Enter the c: "))


if a == b or b == c or a == c:
    sum = 0
else:
    sum = a + b + c

print(f"The sum is: {sum}")
