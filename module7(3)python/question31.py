"""Write a Python program to convert a list of tuples into a dictionary.
"""
def Convert(tup, di):
    di = dict(tup)
    return di
     
tups = [("akash", 10), ("gaurav", 12), ("anand", 14), 
    ("suraj", 20), ("akhil", 25), ("ashish", 30)]
dictionary = {}
print (Convert(tups, dictionary))