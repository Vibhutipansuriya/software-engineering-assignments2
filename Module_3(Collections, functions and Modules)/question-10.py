# Write a Python function that takes two lists and returns true if they have at least one common member

def check_common_members(list1, list2):   # definition to find the common elements from both lists
    s_1 = set(list1)

    for number in list2:
        if number in s_1:
            print("Some numbers are same!! ")
            return True
    return False

list1 = [15,1,2,36,99,100,"Vibhuti","Pink"]

list2 = [15,1,2,36,99,100,40,45,20,30,25]

print(check_common_members(list1,list2))