"""Write a Python program to find the highest 3 values in a dictionary"""
from collections import Counter

mydict = {'A': 67, 'B': 23, 'C': 45, 'D': 56, 'E': 12, 'F': 69}
c = Counter(mydict)
high = c.most_common(3)

print("Initial Dictionary:")
print(mydict, "\n")
print("Dictionary with 3 highest values:")
print("Keys: Values")
for i in high:
    print(i[0], ":", i[1])