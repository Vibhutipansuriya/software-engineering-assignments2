/*Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance) {
            accountNumber = accNum;
            balance = initialBalance;
        }

        void deposit(double amount) {
            balance += amount;
        }

        void withdraw(double amount) {
            if (amount > balance) {
                cout << "Insufficient balance." << endl;
            } else {
                balance -= amount;
            }
        }
};

int main() {
    BankAccount account("123456789", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);
    return 0;
}
