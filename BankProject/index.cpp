#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string name;
    double balance;

public:
    // Method to initialize account details
    void initializeAccount(const string &accNumber, const string &accName, double initialBalance) {
        accountNumber = accNumber;
        name = accName;
        balance = initialBalance > 0 ? initialBalance : 0; // Ensure balance is non-negative
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!" << endl;
        }
    }

    // Friend function to display account details
    friend void displayAccountDetails(const BankAccount &account);
};

// Friend function definition
void displayAccountDetails(const BankAccount &account) {
    cout << "\n--- Account Details ---" << endl;
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Account Holder: " << account.name << endl;
    cout << "Balance: " << account.balance << endl;
}

int main() {
    BankAccount myAccount;

    // Initialize account
    myAccount.initializeAccount("123456789", "John Doe", 1000.0);

    // Perform some operations
    myAccount.deposit(500.0);
    myAccount.withdraw(300.0);
    myAccount.withdraw(1500.0); // Test insufficient balance case

    // Display account details
    displayAccountDetails(myAccount);

    return 0;
}
