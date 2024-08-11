# Write a Python program to create and display all combinations of letters,
# selecting each letter from a different key in a dictionary.
# Sample data: {'1': ['a','b'], '2': ['c','d']}

dict = {'1': ['a', 'b'], '2': ['c', 'd']}

combinations = ['']
for group in dict.values():
    new_combinations = []
    for combo in combinations:
        for letter in group:
            new_combinations.append(combo + letter)
    combinations = new_combinations
for combo in combinations:
    print(combo)
