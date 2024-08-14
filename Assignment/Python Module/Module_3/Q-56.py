#How will you set the starting value in generating random numbers?

'''
To set the starting value for generating random numbers in Python, you use the random.seed() function.
Setting a seed value ensures that the sequence of random numbers generated reproducible .This means that
every time you use the same seed, you will get the same sequence of random numbers, 
'''

import random
random.seed(23)
print(random.randint(1, 100))