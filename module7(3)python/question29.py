"""
Write a Python program to remove an empty tuple(s) from a list of tuples."""

def Remove(tuples):
    tuples = [t for t in tuples if t]
    return tuples
 
tuples = [(), ('vibhuti','30','8'), (), ('hardik', 'tanish'), 
          ('kuldip', 'krisha', '45'), ('',''),()]
print(Remove(tuples))