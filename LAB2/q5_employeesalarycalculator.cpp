#include <iostream>
#include <string>
using namespace std;
// Class to store employee details
class Employee {
private:
    int empID;
    string empName;
    float basicSalary;
    float hra, da, grossSalary;
public:
    // Function to accept employee details
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cin.ignore(); // Clear input buffer
        cout << "Enter Employee Name: ";
        getline(cin, empName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate salary components
    void calculateSalary() {
        hra = 0.20 * basicSalary;          // 20% HRA
        da = 0.10 * basicSalary;           // 10% DA
        grossSalary = basicSalary + hra + da;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "\n----- Employee Salary Details -----" << endl;
        cout << "Employee ID      : " << empID << endl;
        cout << "Employee Name    : " << empName << endl;
        cout << "Basic Salary     : " << basicSalary << endl;
        cout << "HRA (20%)        : " << hra << endl;
        cout << "DA (10%)         : " << da << endl;
        cout << "Gross Salary     : " << grossSalary << endl;
    }
};

int main() {
    Employee emp;

    // Accept employee details
    emp.acceptDetails();

    // Calculate salary
    emp.calculateSalary();

    // Display salary details
    emp.displayDetails();

    return 0;
}