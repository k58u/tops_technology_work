# Differentiate between append () and extend () methods? 
'''
"append()"

append(): Adds a single element to the end of the list.Takes one argument, which can be any data type (e.g., 
number, string, another list, etc.).

Operation: The argument is added as a single element, even if it is a list.

#Example:
list1 = [1, 2, 3]
list1.append([6, 7])
print(list1) 


"extend()"

extend(): Adds each element of an iterable (e.g., list, tuple, set, etc.) to the end of the list.Takes one argument,
which must be an iterable.

Operation:Each element of the iterable is added to the list individually.

#Example:
list1 = [1, 2, 4]
list1.extend([5, 6])
print(list1) 
'''