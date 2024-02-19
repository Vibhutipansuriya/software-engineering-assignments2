/*Write a programto find the multiplication values and the cubic values
usinginline function*/

#include <iostream>
using namespace std;

inline int mul(int x, int y) {
  return x * y;
}

inline int cube(int x) {
  return x * x * x;
}

int main() {
  // Declare the variables and read the input values
  int val1, val2;
  cout << "Enter two values: ";
  cin >> val1 >> val2;

  // Call the inline functions and display the results
  cout << "\nMultiplication value is: " << mul(val1, val2) << endl;
  cout << "\nCube value is: " << cube(val1) << "\t" << cube(val2) << endl;

  return 0;
}
