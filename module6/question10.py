# Get input from the user
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

# Check if the two numbers are equal or if their sum or difference is 5
if a == b or abs(a - b) == 5:
    print("True")
else:
    print("False")