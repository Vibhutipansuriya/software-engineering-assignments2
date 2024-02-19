/*Write a program of Addition, Subtraction, Division, Multiplication
usingconstructor.*/

#include <iostream>
using namespace std;

class Calculator {
  private:
    double first, second; // two private data members
  public:
    Calculator(double x, double y) { // constructor with two parameters
      first = x; // assign the first parameter to the first data member
      second = y; // assign the second parameter to the second data member
    }
    void add() { 
      cout << "The sum is " << first + second << endl;
    }
    void subtract() {
      cout << "The difference is " << first - second << endl;
    }
    void multiply() { 
      cout << "The product is " << first * second << endl;
    }
    void divide() { 
      if (second != 0) { // check if the second number is not zero
        cout << "The quotient is " << first / second << endl;
      }
      else { // if the second number is zero, print an error message
        cout << "Cannot divide by zero" << endl;
      }
    }
};

int main() {
  double a, b; // two local variables to store the input numbers
  cout << "Enter two numbers: " << endl;
  cin >> a >> b;
  Calculator c(a, b); // create a calculator object using the constructor
  c.add(); // call the add function
  c.subtract(); 
  c.multiply(); 
  c.divide();
  return 0;
}

