/*Write a C++ Program display Student Mark sheet using Multiple inheritance
*/
#include<iostream>
using namespace std;

class Student {
protected:
    int roll, n1, n2;

public:
    void get() {
        cout << "Enter the Roll number: ";
        cin >> roll;
        cout << "Enter the two marks: ";
        cin >> n1 >> n2;
    }
};

class Sports {
protected:
    int sum;  // Sports mark

public:
    void getSUM() {
        cout << "\nEnter the sports mark: ";
        cin >> sum;
    }
};

class Statement : public Student, public Sports {
    int total, average;

public:
    void display() {
        total = n1 + n2 + sum;
        average = total / 3;
        cout << "\nRoll Number: " << roll;
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << average;
    }
};

int main() {
    Statement obj;
    obj.get();
    obj.getSUM();
    obj.display();
return 0;
}
