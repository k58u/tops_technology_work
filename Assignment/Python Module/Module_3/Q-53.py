#How can you pick a random item from a list or tuple?

'''
To pick a random item from a list or tuple in Python, you can use the random module.
Specifically, the random.choice() function is designed for this purpose.
'''

import random

numbers = [10, 20, 30, 40, 50]
random_number = random.choice(numbers)
print("Random number from list:", random_number)
letters = ('a', 'b', 'c', 'd')
random_letter = random.choice(letters)
print("Random letter from tuple:", random_letter)
