#Write a Python program to unzip a list of tuples into individual lists.

my_list = [('p', 1, 'y'), ('t', 2, 'h'), ('o', 3, 'n')]

items, nums, alpha = zip(*my_list)

items = list(items)
nums = list(nums)
alpha = list(alpha)

print("Items:", items)
print("Nums:", nums)
print("Alpha:", alpha)