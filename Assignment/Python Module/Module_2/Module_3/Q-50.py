# Write a Python function to check whether a number is perfect or not.

def is_perfect(num):
    return num == sum(i for i in range(1, num) if num % i == 0)
print(is_perfect(4))   
print(is_perfect(22)) 
print(is_perfect(16)) 
