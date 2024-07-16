# Write a Python program to select an item randomly from a list.

import random

tuple_item = ['Mountain', 'Health', 'Earth', 'Strength', 'Power', 'Regain']

print("Original item is : " + str(tuple_item))

random_item = random.choice(tuple_item)

print("Random selected item is : " + str(random_item))
