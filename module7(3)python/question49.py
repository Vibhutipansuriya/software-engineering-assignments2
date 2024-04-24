"""Write a Python function to calculate the factorial of a number (a
nonnegative integer)"""
def fact(n):
    
    return 1 if (n==1 or n==0) else n * fact(n - 1) 

num = 4
print("Factorial of",num,"is",fact(num))