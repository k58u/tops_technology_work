#  Write a Python program to get unique values from a list

def unique_val(my_list):
    return list(set(my_list))

my_list = [1, 2, 2, 3, 3,  4, 4, 5,5]
unique_value = unique_val(my_list)
print(unique_value)
