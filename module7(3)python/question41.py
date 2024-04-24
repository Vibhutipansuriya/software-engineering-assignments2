"""
Write a Python program to map two lists into a dictionary
"""
test_keys = ["vibhuti", "tanish", "hardik"]
test_values = [1, 4, 5]
 
print("Original key list is : " + str(test_keys))
print("Original value list is : " + str(test_values))
 
dict = {test_keys[i]: test_values[i] for i in range(len(test_keys))} #here we can use any name at the place of the dict
 
print("Resultant dictionary is : " + str(dict))