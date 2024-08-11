# Write a Python program to combine values in python list of dictionaries.
# Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount':
# 300}, o {'item': 'item1', 'amount': 750}]
 
dict = [
    {'item': 'item1', 'amount': 400},
    {'item': 'item2', 'amount': 300},
    {'item': 'item1', 'amount': 750}
]
combined_data = {}
for record  in dict:
    item = record['item']
    combined_data[item] = combined_data.get(item, 0) + record['amount']

result = [{'item': item, 'amount': amount} for item, amount in combined_data.items()]

print(result)
