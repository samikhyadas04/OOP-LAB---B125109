#include <iostream>
#include <string>
using namespace std;
// Class to represent a bank account
class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    float balance;
public:
    // Function to enter account details
    void enterDetails() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore(); // Clear input buffer
        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolderName);
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit() {
        float amount;
        balance = 0;
        cout << "\nEnter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    // Function to withdraw money
    void withdraw() {
        float amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        } else {
            cout << "Withdrawal unsuccessful! Insufficient balance." << endl;
        }
    }
    // Function to display account details
    void display() {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    // Enter account details
    account.enterDetails();
    // Deposit money
    account.deposit();
    // Withdraw money
    account.withdraw();
    // Display updated details
    account.display();
    return 0;
}