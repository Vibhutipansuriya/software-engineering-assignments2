"""
3)Differentiate between append () and extend () methods?

append():
Adds a single element to the end of the list.
Increases the list length by 1.
Has a constant time complexity of O(1).
extend():
Appends each element of the iterable to the end of the list.
Increases the list length by the number of elements in the iterable.
Has a time complexity of O(k), where k is the length of the iterable.
Comparing the methods in a single program:
"""


list_1 = [1, 2, 3]
list_2 = [1, 2, 3]
a = [2, 3]

list_1.append(a)
list_2.extend(a)

print(list_1)  # [1, 2, 3, [2, 3]]
print(list_2)  # [1, 2, 3, 2, 3]
