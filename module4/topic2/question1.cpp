//WAP to create simple calculator using class
#include <iostream>
using namespace std;

// Define a class named Calculator
class Calculator {
  // Declare two private attributes to store the operands
  private:
    double num1, num2;
  
  // Declare a public method to get the input from the user
  public:
    void getInput() {
      cout << "Enter the first number: ";
      cin >> num1;
      cout << "Enter the second number: ";
      cin >> num2;
    }
  
  // Declare four public methods to perform the arithmetic operations
  public:
    void add() {
      cout << "The sum is " << num1 + num2 << endl;
    }
  
    void subtract() {
      cout << "The difference is " << num1 - num2 << endl;
    }
  
    void multiply() {
      cout << "The product is " << num1 * num2 << endl;
    }
  
    void divide() {
      // Check if the second number is zero to avoid division by zero error
      if (num2 == 0) {
        cout << "Cannot divide by zero" << endl;
      }
      else {
        cout << "The quotient is " << num1 / num2 << endl;
      }
    }
};

// Define the main function
int main() {
  // Create an object of the Calculator class
  Calculator calc;
  
  // Get the input from the user
  calc.getInput();
  
  // Declare a variable to store the choice of operation
  int choice;
  
  // Display the menu of operations
  cout << "Choose the operation you want to perform:" << endl;
  cout << "1. Addition" << endl;
  cout << "2. Subtraction" << endl;
  cout << "3. Multiplication" << endl;
  cout << "4. Division" << endl;
  cout << "5. Exit" << endl;
  
  // Get the choice from the user
  cin >> choice;
  
  // Use a switch case to perform the corresponding operation
  switch (choice) {
    case 1:
      calc.add();
      break;
    case 2:
      calc.subtract();
      break;
    case 3:
      calc.multiply();
      break;
    case 4:
      calc.divide();
      break;
    case 5:
      cout << "Thank you for using the calculator" << endl;
      break;
    default:
      cout << "Invalid choice" << endl;
  }
  
  // Return 0 to indicate successful execution
  return 0;
}
