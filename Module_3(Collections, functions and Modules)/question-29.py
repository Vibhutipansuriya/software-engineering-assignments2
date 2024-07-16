# Write a Python program to unzip a list of tuples into individual lists.

t_k = [(10,9),(8,7),(6,5)]   # take a tuple list

l1,l2 = zip(*t_k)   # unzip a list of tuples into individual lists

# convert tuples to lists
l1 = list(l1)   
l2 = list(l2)

# print lists

print("The first list is : ", l1)
print("The second list is : ", l2)