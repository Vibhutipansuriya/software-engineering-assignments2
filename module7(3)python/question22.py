"""Write a Python program to convert a tuple to a string."""
def convertTuple(tup):
    
    str = ''
    for i in tup:
        str = str + i
    return str
 
tuple = ('v','i','b','h','u','t','i')
str = convertTuple(tuple)
print(str)