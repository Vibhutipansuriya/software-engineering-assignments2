# Difference between append() and extend() methods?

# The difference between the append method is the append can add a sigle element at the end of the list.
# The extend method can add the whole string at the end of the list

l=[5,10,15,20,25,30]  # list intialization

l.append(100)   # adding the element in the last place of the given list
print(l)

l.extend([102,25,300,200,225])   # passing the new list of elements in the previous given list of elements at the end of the list
print(l)