#include <iostream>
using namespace std;

int main() {
    double balance, add, deduct;
    cout << "Enter your current balance: ";
    cin >> balance;
    double *ptr = &balance;
    cout << "Current balance: " << *ptr << endl;
    cout << "Enter amount to add: ";
    cin >> add;
    *ptr = *ptr + add;
    cout << "Enter amount to be deducted: ";
    cin >> deduct;
    *ptr = *ptr - deduct; // new updated balance
    cout << "Your Final balance: " << *ptr << endl;
    return 0;
}