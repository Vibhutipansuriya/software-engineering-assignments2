a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
c = int(input("Enter the third integer: "))

# Check if any two values are equal
if a == b or b == c or a == c:
    # If any two values are equal, set the sum to zero
    sum = 0
else:
    # Otherwise, add the three values together
    sum = a + b + c

# Print the sum
print("The sum is:", sum)