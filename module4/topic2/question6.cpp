/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables*/
#include <iostream> // Include necessary header for input/output stream
#include <string> // Include necessary header for string operations

class Person { // Define a class named Person
  private: 
    std::string name; 
    int age; 
    std::string country; 

  public:
    
    void setName(const std::string & n) { 
      name = n; 
	      }

    void setAge(int a) { 
      age = a; 
    }

    void setCountry(const std::string & c) { 
      country = c; 
    }

    
    std::string getName() { 
      return name; // Return the stored name
    }

    int getAge() { 
      return age; 
    }

    std::string getCountry() { 
      return country; 
    }
};

int main() {
  
  Person person;

  
  person.setName("vibhuti pansuriya"); // Set the person's name
  person.setAge(32); // Set the person's age
  person.setCountry("canada"); // Set the person's country

  // Get and display the person's details using getter functions
  std::cout << "Name: " << person.getName() << std::endl; 
  std::cout << "Age: " << person.getAge() << std::endl; 
  std::cout << "Country: " << person.getCountry() << std::endl; 

  return 0; 
}


