"""
8)Write a Python program to check a list is empty or not.

"""
def empty(lst):
    if len(lst) == 0:
        return True
    else:
        return False

my_list = [] 
if empty(my_list):
    print("The list is empty")
else:
    print("The list is not empty")