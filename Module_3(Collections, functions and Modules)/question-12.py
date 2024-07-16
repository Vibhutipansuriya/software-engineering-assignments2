# Write a python function that takes a list and returns a new list with unique elements of the first list

# Method without using set to remove the same elements from the list
def unique_elements(l):   # initialization of unique elements
    unique_elements_l = []   # empty list taken

    for s in l:      
        if s not in unique_elements_l:    # if s is not in list then print the element
            unique_elements_l.append(s)

    for s in unique_elements_l:
        print(s)

l = [10,20,20,30,40,10]   # list of elements
print("The unique elements of the l are : ")   # print the unique elements
unique_elements(l)  # calling the new list with unique elements

