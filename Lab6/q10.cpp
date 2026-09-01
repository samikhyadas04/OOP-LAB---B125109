#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int *ids = new int[n]; // we allocated the memory dynamically
    cout << "Enter student IDs:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(ids + i);
    }
    int searchID;
    cout << "Enter ID to search: ";
    cin >> searchID;
    int *ptr = ids;
    int position = 0;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (*ptr == searchID) {
            found = true; // the required id is found
            break;
        }
        ptr++;
        position++;
    }
    if(found) {
        cout << "Student ID is found." << endl;
        cout << "Position of the id: " << position << endl;
    }
    else {
        cout << "Student ID is not being found." << endl;
    }
    delete[] ids; //deleted the dynamically allocated array
    return 0;
}