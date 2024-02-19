/*11. Write a program to calculate the area of circle, rectangle and
triangleusing Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area*
breadthCircle: Pi * Area
*Area*/
#include<iostream>
using namespace std;

const float pi = 3.14;

// Function to calculate the area of a triangle
float area(float base, float height)
 {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
float area(float radius)
 {
    return pi * radius * radius;
}

// Function to calculate the area of a rectangle
float radius(float length, float breadth)
 {
    return length * breadth;
}

int main() 
{
    float base, height, radius, length, breadth;
    float result;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    result = area(base, height);
    cout << "Area of the triangle: " << result << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    result = area(radius);
    cout << "Area of the circle: " << result << endl;

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    result = area(length, breadth);
    cout << "Area of the rectangle: " << result << endl;

    return 0;
}
