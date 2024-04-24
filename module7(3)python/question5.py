"""
5)How will you compare two lists?

using the sort() Method or the sorted() Function:
You can sort the lists and then compare them for equality.
The sort() method sorts the list in place, while the sorted() function returns a new sorted list.
After sorting, lists that are equal will have the same items in the same index positions.
The == operator compares the lists item by item (element-wise comparison).
The order of the original list items is not important because the lists are sorted before comparison.

"""

list1 = [1, 2, 3, 4, 5]
list2 = [2, 3, 5, 4, 7]
list3 = [5, 1, 3, 2, 4]

list1.sort()
list2.sort()
list3.sort()

if list1 == list2:
    print("list1 and list2 are the same")
else:
    print("list1 and list2 are not the same")

if list1 == list3:
    print("list1 and list3 are the same")
else:
    print("list1 and list3 are not the same")