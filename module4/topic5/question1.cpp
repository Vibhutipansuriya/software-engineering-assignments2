/*Write a program of to swap the two values using template*/
#include <iostream>
using namespace std;

template <class A>
int swap_numbers(A& x, A& y)
 {
    A t;
    t = x;
    x = y;
    y = t;
    return 0;
}

int main() {
    int a = 30, b = 50;
    // swap_numbers()
    swap_numbers(a, b);
    cout << "Swapped values: " << a << " " << b << endl;
    return 0;
}
