'''
What is List? How will you reverse a list? 

A list is a collection of items (elements) that are ordered and changeable. 
Lists allow duplicate elements and are defined using square brackets []. For example:

my_list = [1, 2, 3, 4, 5]

reverse a list 

1. Using the reverse() method:

This method reverses the list in place (i.e., it modifies the original list).

my_list = [1, 2, 3, 4, 5]
my_list.reverse()
print(my_list)  

2. Using slicing:

This creates a new list that is the reverse of the original list.

my_list = [1, 2, 3, 4, 5]
reverse_list = my_list[::-1]
print(reverse_list)  

'''