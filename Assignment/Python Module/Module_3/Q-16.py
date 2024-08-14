# Write a Python program to check whether a list contains a sub list 

def sublist(list1, list2):
    return str(list2)[1:-1] in str(list1)[1:-1]

list1 = [1, 2, 3, 4, 5]
list2 = [3, 4]

print(sublist(list1, list2))