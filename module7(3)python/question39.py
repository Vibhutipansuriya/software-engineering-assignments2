"""
Write a Python program to check multiple keys exists in a dictionary
"""
name = {"vibhuti" : 1, "tanish" : 2, "hardik" :3}
 
s1 = set(['vibhuti', 'tanish'])
s2 = set(['vibhuti', 'ghi'])
 
print(s1.issubset(name.keys()))
print(s2.issubset(name.keys()))