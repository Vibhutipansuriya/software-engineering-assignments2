"""
7)Write a Python program to remove duplicates from a list.

"""
def duplicates(inputlst):
    finallst = []
    for item in inputlst:
        if item not in finallst:
            finallst.append(item)
    return finallst

my_list = [3,5,43,34,32,3,8,4,8]
print(duplicates(my_list))