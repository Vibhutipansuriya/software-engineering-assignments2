"""
Write a Python script to sort (ascending and descending) a dictionary by
value.
"""
mydict = {'apple': 5, 'banana': 2, 'orange': 8, 'grape': 1}
sorted_dict = {}
for key in sorted(mydict, key=mydict.get):
    sorted_dict[key] = mydict[key]
print(sorted_dict)