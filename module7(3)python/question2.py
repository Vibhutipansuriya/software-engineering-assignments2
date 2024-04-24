"""
2)How will you remove last object from a list?
Suppose list1 is [2, 33, 222, 14, and 25], what is list1 [-1]?"""



list1 = [2, 33, 222, 14, 25]
print("original list: ",list1)

list1 = list1[:-1] 

print("new list:",list1)

"""
 we can use pop also for delete the last elementof the list
list1 = [2, 33, 222, 14, 25]
print("Original list: ", list1)
 
ele = list1.pop()
 
print("New list : ", list1)"""