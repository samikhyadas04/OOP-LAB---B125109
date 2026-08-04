#include <iostream>
#include <string>
using namespace std;

// Class to store electricity bill details
class ElectricityBill {
private:
    int consumerNumber;
    string consumerName;
    int unitsConsumed;
    float billAmount;

public:
    // Function to accept consumer details
    void acceptDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;

        cin.ignore(); // Clear input buffer

        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    // Function to calculate electricity bill
    void calculateBill() {
        if (unitsConsumed <= 100) {
            billAmount = unitsConsumed * 5;
        }
        else if (unitsConsumed <= 200) {
            billAmount = (100 * 5) + ((unitsConsumed - 100) * 7);
        }
        else {
            billAmount = (100 * 5) + (100 * 7) + ((unitsConsumed - 200) * 10);
        }
    }

    // Function to display the bill
    void displayBill() {
        cout << "\n----- Electricity Bill -----" << endl;
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << unitsConsumed << endl;
        cout << "Total Bill      : Rs. " << billAmount << endl;
    }
};

int main() {
    ElectricityBill bill;

    // Accept consumer details
    bill.acceptDetails();

    // Calculate bill
    bill.calculateBill();

    // Display bill
    bill.displayBill();

    return 0;
}