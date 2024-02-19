/*Define a class to represent a bank account. Include the following
 members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account*/


#include <iostream>
using namespace std;

// constructor
BankAccount::BankAccount(string name, string number, string type, double balance) {
  this->name = name;
  this->number = number;
  this->type = type;
  this->balance = balance;
}

// getters and setters
string BankAccount::getName() const {
  return name;
}

void BankAccount::setName(string name) {
  this->name = name;
}

string BankAccount::getNumber() const {
  return number;
}

void BankAccount::setNumber(string number) {
  this->number = number;
}

string BankAccount::getType() const {
  return type;
}

void BankAccount::setType(string type) {
  this->type = type;
}

double BankAccount::getBalance() const {
  return balance;
}

void BankAccount::setBalance(double balance) {
  this->balance = balance;
}

// other methods
void BankAccount::deposit(double amount) {
  balance += amount;
}

void BankAccount::withdraw(double amount) {
  if (amount > balance) {
    cout << "Insufficient funds\n";
  }
  else {
    balance -= amount;
  }
}

void BankAccount::display() const {
  cout << "Name: " << name << "\n";
  cout << "Account Number: " << number << "\n";
  cout << "Type of Account: " << type << "\n";
  cout << "Balance: " << balance << "\n";
}
