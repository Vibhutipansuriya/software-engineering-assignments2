"""Write a Python function that takes a list and returns a new list with unique
elements of the first list."""

def unique_set(input_list):
   
    unique_set = set(input_list)
    unique_list = list(unique_set)
    return unique_list

list1 = [10, 20, 10, 30, 40, 40]
print("Unique values from the first list:", unique_set(list1))

list2 = [1, 2, 1, 1, 3, 4, 3, 3, 5]
print("Unique values from the second list:", unique_set(list2))

