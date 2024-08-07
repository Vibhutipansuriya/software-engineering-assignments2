/* Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid/*/

#include <iostream> 

class Date { 
  private: 
    int day; 
    int month; 
    int year; 
  public:
    
    Date(int d, int m, int y): day(d), month(m), year(y) {}

    
    void setDate(int d, int m, int y) {
      day = d; 
      month = m; 
      year = y; 
    }

    
    int getDay() const {
      return day; 
    }

    
    int getMonth() const {
      return month; 
    }

    
    int getYear() const {
      return year; 
    }

    
    bool isValidDate() const {
      // Check if the month is valid
      if (month < 1 || month > 12)
        return false;

      // Check if the day is valid
      if (day < 1 || day > 31)
        return false;

      // Check for specific month-day combinations that are invalid
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

      if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
          if (day > 29)
            return false;
        } else {
          if (day > 28)
            return false;
        }
      }

      // Date is valid
      return true;
    }
};

int main() {
  // Create a date object
  Date date(0, 0, 0);

  // Set the date
  int day, month, year; 
  std::cout << "Input day: "; 
  std::cin >> day; 
  std::cout << "Input month: "; 
  std::cin >> month; 
  std::cout << "Input year: "; 
  std::cin >> year; 

  date.setDate(day, month, year); 

  // Get and display the date
  std::cout << "Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl; // Output date

  
  if (date.isValidDate())
    std::cout << "The date is valid." << std::endl; 
  else
    std::cout << "The date is invalid." << std::endl; 

  return 0; 
}

