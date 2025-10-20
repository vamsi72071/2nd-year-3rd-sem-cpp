#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string name;
    double balance;
public:
    // Constructor
    BankAccount(int accNo, string accName, double initialBalance) {
        accountNumber = accNo;
        name = accName;
        balance = initialBalance;
    }
    // Deposit function
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    // Withdraw function
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    // Display balance
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};
int main() {
    BankAccount acc1(101, "John", 5000);
    acc1.displayBalance();
    acc1.deposit(2000);
    acc1.withdraw(1500);
    acc1.displayBalance();
    return 0;
}

