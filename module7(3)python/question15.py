""" Write a Python program to find the second smallest number in a list.
"""
def len(list1):

    list1.sort()

    print("Smallest element is:", list1[0])
    print("Second Smallest element is:", list1[1])
 
list1=[12, 45, 2, 41, 31, 10, 8, 6, 4]
smallest = len(list1)