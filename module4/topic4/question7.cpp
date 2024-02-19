/*Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/


#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Base class A constructor" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Class B constructor" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Class C constructor" << endl;
    }
};

int main() {
    C obj;
    return 0;
}
