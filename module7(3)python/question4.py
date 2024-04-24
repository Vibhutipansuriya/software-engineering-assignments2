"""
4)Write a Python function to get the largest number, smallest num and sum
of all from a list."""


def findlen(list1):
    length = len(list1)
    list1.sort()
    print("Largest element is:", list1[length-1])
    print("Smallest element is:", list1[0])
    print("Sum of all elements is:", sum(list1))

my_list = [1, 67, 20, 31, 51, 12,39, 8, 22]
findlen(my_list)
