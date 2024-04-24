"""
1) what is list? how will you reverse a list?
A list in Python is a versatile data structure that allows you to store multiple items in a single variable. Lists are ordered, 
changeable, and can contain duplicate values.

for example:

list=[10,11,12,13,14,15]    input
     [15,14,13,12,11,10]    output will be this if we reverse list

"""


def Reverse(lst):
   new_lst = lst[::-1]
   return new_lst
 
 
lst = [10, 11, 12, 13, 14, 15]
print(Reverse(lst))