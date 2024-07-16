# Write a Python program to check a list is empty or not

def check_list(l1): # definition to check the list
    l1 = [10, 15, 20, 25, 30]  
    if len(l1) == 0:   # if the list is not empty.
        print("Empty list")
    else:
        print(l1)

l2 = []
if check_list(l2):
    print(l2)  # If the list is empty
else:
    print("Empty list.")
