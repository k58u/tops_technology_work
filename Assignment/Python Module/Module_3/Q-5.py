# How will you compare two lists? 
'''

In python we can use some methods to compare two list :

1 Direct Comparison:

You can use the == operator to check if two lists are exactly the same in terms of elements and order.

list1 = [1, 2, 3]
list2 = [1, 2, 3]

if list1 == list2:
    print("The lists are equal.")
else:
    print("The lists are not equal.")


2  Check if One List Contains All Elements of Another (Regardless of Order):

You can use the set function to compare lists regardless of the order of elements.

list1 = [1, 2, 3]
list2 = [3, 2, 1]

if set(list1) == set(list2):
    print("The lists have the same elements.")
else:
    print("The lists have different elements.")


'''