"""Write a Python program to find the maximum and minimum numbers
from the specified decimal numbers.
"""
from decimal import Decimal

data = list(map(Decimal, '2.45 2.69 2.45 3.45 2.00 0.04 7.25'.split()))


maximum_value = max(data)
minimum_value = min(data)

print(f"Maximum: {maximum_value}")
print(f"Minimum: {minimum_value}")