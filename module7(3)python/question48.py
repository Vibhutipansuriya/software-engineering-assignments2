"""Write a Python program to create a dictionary from a string.
"""
s = "w3resource"
myDict = dict()

for character in s:
    if character in myDict:
        myDict[character] += 1
    else:
        myDict[character] = 1

print("The dictionary created from characters of the string is:")
print(myDict)
