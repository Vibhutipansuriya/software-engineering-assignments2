# How will you compare two lists?

# We can compare the two lists  by using sorting method through which the list is sorted

l = [10, 15, 25, 35, 20, 30]

m = [30, 25, 35, 20, 10, 15]

n = [16, 68, 96, 52, 23, 46]

# Sorting all lists of elements

l_sort = sorted(l)
m_sort = sorted(m)
n_sort = sorted(n)

# printing if the elements of the list are same or not

if l_sort==m_sort:
    print("The list l and m are same.")

else:
    print("The list l and m are different.")

if l_sort==n_sort:
    print("The list l and n are same.")
else:
    print("The list l and n are different.")

if m_sort==n_sort:
    print("The list m and n are same.")
else:
    print("The list m and n are different.")
