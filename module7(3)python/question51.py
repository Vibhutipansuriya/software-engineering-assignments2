"""Write a Python function to check whether a number is perfect or not."""
def perfect_number(number):
    Sum = 0
    for i in range(1, number):
        if number % i == 0:
            Sum += i
    if Sum == number:
        return True
    else:
        return False

print(perfect_number(5))  
print(perfect_number(8))  