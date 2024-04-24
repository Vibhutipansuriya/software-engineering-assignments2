"""
Write a Python script to concatenate following dictionaries to create a
new one
"""
dict1 = {'Pen': 5, 'Pencil': 4, 'Chocolate': 15}
dict2 = {'Apple': 25, 'Ball': 10, 'Doll': 20}

dict1.update(dict2)

print(dict1)