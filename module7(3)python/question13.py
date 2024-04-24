"""Write a Python program to convert a list of characters into a string.
"""
def con(s): 
 
    new = "" 

    for i in s: 
        new += i
 
    return new 
     
     
s = ['v','i','b','h','u','t','i'] 
print(con(s)) 