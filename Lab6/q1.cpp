#include <iostream>
using namespace std;

int main() {
    int parcels;
    int increase;
    cout << "Enter number of parcels delivered: ";
    cin >> parcels;
    int *ptr = &parcels;
    cout << "Current_ parcels: " << *ptr << endl;
    cout << "Enter additional parcels to be deleivered: ";
    cin >> increase;
    *ptr = *ptr + increase; //incremented by pointer
    cout << "Updated parcels are : " << *ptr << endl;
    return 0;
}