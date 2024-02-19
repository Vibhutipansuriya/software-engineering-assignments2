/*Write a C++ program to implement a class called Circle that has
private member variables for radius.
Include member functions to calculate the circle's area and
 circumference*/

#include <iostream>
#include <cmath>
using namespace std;

// Define a constant for pi
const double PI = 3.14159;

// Declare a class called Circle
class Circle {
    // Declare private member variables for radius
    private:
        double radius;
    
    // Declare public member functions
    public:
        // Define a constructor that takes a parameter for radius
        Circle(double r) {
            radius = r;
        }

        // Define a member function to calculate the circle's area
        double area() {
            return PI * pow(radius, 2);
        }

        // Define a member function to calculate the circle's circumference
        double circumference() {
            return 2 * PI * radius;
        }
};

// Define the main function
int main() {
    // Create an object of the Circle class with radius 5
    Circle c(5);

    // Print the circle's area and circumference
    cout << "The circle's area is " << c.area() << endl;
    cout <<"The circle's circumference is "<< c.circumference()<< endl;

    // Return 0 to indicate successful execution
    return 0;
}
