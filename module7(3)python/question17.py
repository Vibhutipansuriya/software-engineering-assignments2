"""
Write a Python program to check whether a list contains a sub list

"""
lst1=[1,2,5,6,8,3,2,34,3,4]
lst2=[1,2,3,4]


def sublist(lst1,lst2):
    for item in lst2:
        try:
           lst1.index(item)
        except ValueError:
           return False
    return True


print(sublist(lst1,lst2))