#Write a Python script to sort (ascending and descending) a dictionary by value.

sample_dict = {'Guauva': 2, 'banana': 3, 'cherry': 1, 'orange': 5, 'Mango': 4}

sorted_asc = dict(sorted(sample_dict.items(), key=lambda item: item[1]))

sorted_desc = dict(sorted(sample_dict.items(), key=lambda item: item[1], reverse=True))

print("Ascending:", sorted_asc)
print("Descending:", sorted_desc)
