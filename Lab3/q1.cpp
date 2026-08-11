#include <iostream>
using namespace std;

int main() {
    int *ptr;

    // Dynamically allocate memory for one integer
    ptr = new int;

    // Read value from user
    cout << "Enter an integer: ";
    cin >> *ptr;

    // Display the value
    cout << "The entered value is: " << *ptr << endl;

    // Release dynamically allocated memory
    delete ptr;

    return 0;
}