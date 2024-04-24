"""Write a Python program to calculate the area of a trapezoid"""

def area_trapezoid(base1, base2, height):
    return (base1 + base2) / 2 * height
 
base1 = 5
base2 = 9
height = 4
result = area_trapezoid(base1, base2, height)
print(f"Area of Trapezoid: {result}")