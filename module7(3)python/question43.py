"""Write a Python program to print all unique values in a dictionary
"""
from itertools import chain

test_dict = {'vibhuti': [7, 8, 9, 10],
             'is': [10, 11, 7, 5],
             'best': [6, 12, 10, 8],
             'for': [3, 2, 4]}
 
print("The original dictionary is : " + str(test_dict))
 
# Extract Unique values dictionary values
# Using chain() + sorted() + values()
result = list(sorted(set(chain(*test_dict.values()))))
 
print("The unique values list is : " + str(result))