"""
10)Write a Python program to generate and print a list of first and last 5
elements where the values are square of numbers between 1 and 30.
"""
def prntvalues():
    # Create an empty list 'l'
    l = list()

    # Loop from 1 to 30 (inclusive)
    for i in range(1, 31):
        # Calculate the square of 'i' and append it to the list 'l'
        l.append(i ** 2)

    # Print the first 5 elements of the list 'l'
    print("First 5 elements:", l[:5])

    # Print the last 5 elements of the list 'l'
    print("Last 5 elements:", l[-5:])

# Call the print_values function to execute it
prntvalues()