#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of parking slots: ";
    cin >> n;
    int *slots = new int[n];
    cout << "Enter status of each slot\n";
    for (int i = 0; i < n; i++) {
        cin >> *(slots + i);
    }
    int available = 0;
    int preoccupied = 0;
    int *ptr = slots;
    for (int i = 0; i < n; i++) {
        if (*ptr == 0)
            available++;
        else if (*ptr == 1)
            preoccupied++;

        ptr++;
    }
    cout << "\nAvailable slots: " << available << endl;
    cout << "preOccupied slots: " << preoccupied << endl;
    delete[] slots;
    return 0;
}