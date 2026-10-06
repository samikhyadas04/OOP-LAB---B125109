#include <iostream>
using namespace std;

class BankAccount {
protected:
    string accountNo;
    double balance;

public:
    BankAccount(string acc, double bal) {
        accountNo = acc;
        balance = bal;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string acc, double bal, double rate)
        : BankAccount(acc, bal) {
        interestRate = rate;
    }

    void display() {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Savings Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Interest: " << interest << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double minimumBalance;
    double maintenanceCharge;

public:
    CurrentAccount(string acc, double bal,
                   double minBal, double charge)
        : BankAccount(acc, bal) {
        minimumBalance = minBal;
        maintenanceCharge = charge;
    }

    void display() {
        if (balance < minimumBalance) {
            balance -= maintenanceCharge;
        }

        cout << "Current Account" << endl;
        cout << "Account No: " << accountNo << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount savings("SA101", 50000, 5);
    CurrentAccount current("CA101", 8000, 10000, 500);

    savings.display();

    cout << endl;

    current.display();

    return 0;
}