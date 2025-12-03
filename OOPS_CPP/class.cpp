/*

A class is a user-defined type that groups data (members) and functions (methods) together. 
An object is an instance of a class that actually holds the data at runtime.


*/




#include <iostream>
#include <string>
using namespace std;

// Simple class representing a bank account
class BankAccount {
private:            // Accessible only inside the class
    string owner;
    double balance;

public:             // Accessible from outside (users of the class)
    // Member function to initialize data
    void open(const string& ownerName, double initialDeposit) {
        owner = ownerName;           // 'this->owner' is implied
        balance = initialDeposit;
    }

    // Member function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    // Member function to display current state
    void print() const { // 'const' means this function does not modify data members
        cout << "Owner: "   << owner
                  << ", Balance: " << balance << '\n';
    }
};

int main() {
    BankAccount a1;           // object 1
    BankAccount a2;           // object 2

    a1.open("Satyam", 1000.0); // set state for a1
    a2.open("Sam",   500.0);  // set state for a2

    a1.deposit(200.0);
    a2.withdraw(100.0);

    a1.print();
    a2.print();

    return 0;
}
