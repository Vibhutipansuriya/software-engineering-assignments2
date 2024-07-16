# Write a Python function to check whether a number is in a given range

def check(number, start, last):
    # Check number in range
    if start <= number <= last:
        return True
    else:
        return False

# take input
num = int(input("Enter number: "))
start_range = int(input("Enter beginning of the range: "))
last_range = int(input("Enter ending of the range: "))

# Check if the number is in the range and print the result
if check(num, start_range, last_range):
    print(f"{num} is in the range from {start_range} to {last_range}")
else:
    print(f"{num} is not in the range from {start_range} to {last_range}")