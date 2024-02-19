/*Write a program to find the max number from given two
numbersusing friend function*/
#include <iostream>
using namespace std;

class Test
{
private:
    int a, b;

public:
    void input() 
	{
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    friend void find(Test t);
};

void find(Test t) 
{
    if (t.a > t.b) 
	{
        cout << "Largest is: " << t.a;
    } else {
        cout << "Largest is: " << t.b;
    }
}

int main()
{
    Test t;
    t.input();
    find(t);
    return 0;
}

