"""
Write a Python script to merge two Python dictionaries
"""
def merge_dicts(dict1, dict2):
    dict2.update(dict1)
    return dict2

dict1 = {'a': 10, 'b': 8}
dict2 = {'d': 6, 'c': 4}
merged_dict = merge_dicts(dict1, dict2)
print(merged_dict) 