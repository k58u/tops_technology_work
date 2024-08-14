# How will you randomizes the items of a list in place?
'''
To randomize the items of a list in place, you can use the random.shuffle() function.This function shuffles
the elements of the list in place, meaning the original list is modified directly. 
'''
import random
my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]
random.shuffle(my_list)
print("Shuffled list:", my_list)