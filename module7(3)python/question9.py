"""
9)Write a Python function that takes two lists and returns true if they have
at least one common member.
"""
def common_ele(list1, list2):

    result = False

    
    for a in list1:
        
        for b in list2:
    
            if a == b:
            
                result = True
                return result


print(common_ele([1, 2, 3, 4, 5], [5, 6, 7, 8, 9]))
print(common_ele([1, 2, 3, 4, 5], [6, 7, 8, 9])) 