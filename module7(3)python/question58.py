"""How will you randomizes the items of a list in place?
Using sorted()
Using random.shuffle()
Using random.sample() 
Using the Random Selection Method
Using Fisher-Yates shuffle Algorithm
Using itertools.permutations() function
Using NumPy

"""
import random
my_list = [1, 2, 3, 4, 5]
 
shuffled_list = sorted(my_list, key=lambda x: random.random())
 
print("Original list:", my_list)
print("Shuffled list:", shuffled_list)