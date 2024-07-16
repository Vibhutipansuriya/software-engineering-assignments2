# Write a Python program to check whether an element exists within a tuple.

t = (10,9,8,7,6)

element = int(input("Enter element : "))

if element in t:
    print(f"The element {element} is present in the tuple.")

else:
    print(f"The element {element} is not present in the tuple.")