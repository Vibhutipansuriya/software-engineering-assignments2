"""Write a Python program to reverse a tuple."""

def Reverse(tuples):
    new_tup = tuples[::-1]
    return new_tup
     
tuples = ('s','r','h','f','g','i','h','j')
print(Reverse(tuples))