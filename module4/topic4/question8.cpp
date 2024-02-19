/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/
#include <iostream>
using namespace std;

class MathOperations {
public:
    
    int num(int a, int b) {
        return a + b;
    }

    // Function to subtract two integers numbers
    int num(int a, int b, char operation) {
        if (operation == '-') {
            return a - b;
        }
        
        else {
            cout << "Invalid operation.: +, -\n";
            return 0;
        }
    }

    // Function to multiply two integers
    int num(int a, int b, float) {
        return a * b;
    }

    // Function to divide two integers
    float num(int a, int b, double) {
        if (b != 0) {
            return static_cast<float>(a) / b;
        } else {
            cout << "Cannot divide by zero.\n";
            return 0.0;
        }
    }
};

int main() {
    MathOperations math;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    cout << "Sum = " << math.num(num1, num2) << endl;

    
    cout << "subtraction= " << math.num(num1, num2, '-') << endl;

    
    cout << "Multiplication = " << math.num(num1, num2, 0.0) << endl;

    
    cout << "Division = " << math.num(num1, num2, 0.0) << endl;

    return 0;
}

