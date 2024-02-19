/*Write a C++ Program to find Area of Rectangle using inheritance*/

#include <iostream>
using namespace std;
class Shape {
public:
    double getArea() {
        return 0; 
    }
};

class Rect : public Shape {
private:
    double length;
    double width;

public:
    Rect(double len, double wid) : length(len), width(wid) {}

    double getArea() {
        return length * width;
    }
};

int main() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rect rect(length, width);
    std::cout << "Area of the rectangle: " << rect.getArea() << std::endl;

    return 0;
}
