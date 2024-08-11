# Write a Python function to get the largest number, smallest num and sum 
# of all from a list. 

def maximum_num(numbers):
    largest = max(numbers)
    smallest = min(numbers)
    total_sum = sum(numbers)
    return largest, smallest, total_sum

numbers = [10 ,20, 30, 40, 50, 60]
largest, smallest, total_sum = maximum_num(numbers)
print(f"Largest number: {largest}")
print(f"Smallest number: {smallest}")
print(f"Sum of all numbers: {total_sum}")
