#How can you pick a random item from a range?
'''
To pick a random item from a range, you need to convert the range object to a list or tuple first, 
because random.choice() requires a sequence
'''
import random

range = range(1, 20) 
list = list(range)

random_item = random.choice(list)
print("Random item from range:", random_item)
