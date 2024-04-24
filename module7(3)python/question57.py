"""How will you set the starting value in generating random numbers?
To set a seed for the random number generator in Python, we simply use the random.seed() Function and pass in an integer value as the seed. 
This can be any integer value.
"""
# import random
import random
 
# prints a random value from the list
list1 = [1, 2, 3, 4, 5, 6]
print(random.choice(list1))
 
# prints a random item from the string
string = "striver"
print(random.choice(string))
