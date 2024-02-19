/* Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
        string company;
        string model;
        int year;
    public:
        void setCompany(string company_name) {
            company = company_name;
        }
        void setModel(string model_name) {
            model = model_name;
        }
        void setYear(int year_value) {
            year = year_value;
        }
        string getCompany() {
            return company;
        }
        string getModel() {
            return model;
        }
        int getYear() {
            return year;
        }
};

int main() {
    Car myCar;
    myCar.setCompany("audi");
    myCar.setModel("q3");
    myCar.setYear(2022);
    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;
    return 0;
}
