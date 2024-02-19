/*Assume a class cricketer is declared. Declare a derived class batsman
from cricketer. Data member of batsman. Total runs, Average runs and
best performance. Member functions input data, calculate average
runs, Displaydata. (Single Inheritance)*/

#include <iostream>
using namespace std;
class Cricketer 
{
public:
    string name;
    int totalRuns, avgRuns, bestPerformance,Matches;

    void inputData() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter total runs: ";
        cin >> totalRuns;

        cout << "Enter no. of matches played: ";
        cin >> Matches;

        cout << "Enter best score: ";
        cin >> bestPerformance;
    }

    void calAvg() 
	{
        avgRuns = totalRuns /Matches;
        cout << "Average: " << avgRuns << endl << endl;
    }
};

class Batsman : public Cricketer
 {
public:
    void display() 
	{
        cout << "Name: " << name << endl;
        cout << "Total runs: " << totalRuns << endl;
        cout << "Best score: " << bestPerformance << endl;
        cout << "Average: " << avgRuns << endl;
    }
};

int main() 
{
    Batsman Player1;
    Player1.inputData();
    Player1.calAvg();
    Player1.display();
}
