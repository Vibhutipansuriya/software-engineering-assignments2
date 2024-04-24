"""Write a Python program to get unique values from a list"""
def uniqueset(input_list):
    """
    Returns a new list containing unique elements from the input list.
    """
    unique_set = set(input_list)
    unique_list = list(unique_set)
    return unique_list


list1 = [10, 20, 10, 30, 40, 40]
print("Unique values from the first list:", uniqueset(list1))

list2 = [1, 2, 1, 1, 3, 4, 3, 3, 5]
print("Unique values from the second list:", uniqueset(list2))