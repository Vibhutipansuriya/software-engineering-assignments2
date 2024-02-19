/*c++ program to  Create a class person having members name and age. Derive a class student having member percentage.
 Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. 
 Write also Main function (Multiple Inheritance) */


#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    
    Person(const string& n, int a) : name(n), age(a) {}

    
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    
    void displayData() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    double percentage;

public:
    // Constructor 
    Student(const string& n, int a, double p) : Person(n, a), percentage(p) {}

    
    void readStudentData() {
        readData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    
    
    void displayStudentData() const {
        displayData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    double salary;

public:
    
    Teacher(const string& n, int a, double s) : Person(n, a), salary(s) {}

    
    void readTeacherData() {
        readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    
    void displayTeacherData() const {
        displayData();
        cout << "Salary:" << salary << endl;
    }
};

int main() {
    
    Student student("Vibhuti", 20, 85.5);
    student.readStudentData();


    Teacher teacher("Hardik ", 45, 60000);
    teacher.readTeacherData();

    
    cout << "\nStudent Information:\n";
    student.displayStudentData();

    cout << "\nTeacher Information:\n";
    teacher.displayTeacherData();

    return 0;
}
