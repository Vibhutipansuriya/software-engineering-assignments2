"""Write a Python program to combine values in python list of dictionaries.
Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount':
300}, o {'item': 'item1', 'amount': 750}]"""

from collections import Counter

item_list = [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300}, {'item': 'item1', 'amount': 750}]

# Create an empty Counter object 'result' to store the summed amounts for each 'item'.
result = Counter()

# Iterate through the dictionaries in 'item_list' using a for loop.
for d in item_list:
    # Update the 'result' Counter by adding the 'amount' to the corresponding 'item' key.
    result[d['item']] += d['amount']

# Print the 'result' Counter, which contains the summed amounts for each 'item'.
print(result) 