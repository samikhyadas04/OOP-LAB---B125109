#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float basicSalary;

    int numberOfMonths;
    float *monthlyEarnings;

public:
    // Constructor
    Employee() {
        monthlyEarnings = nullptr;
    }

    // Accept employee details and monthly earnings
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        // Dynamically allocate memory
        monthlyEarnings = new float[numberOfMonths];

        cout << "Enter monthly earnings:" << endl;

        for(int i = 0; i < numberOfMonths; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlyEarnings[i];
        }
    }

    // Display complete analysis
    void displayAnalysis() {
        float total = 0;
        int highestMonth = 0;

        // Calculate total and find highest earning
        for(int i = 0; i < numberOfMonths; i++) {
            total += monthlyEarnings[i];

            if(monthlyEarnings[i] > monthlyEarnings[highestMonth]) {
                highestMonth = i;
            }
        }

        // Calculate average
        float average = total / numberOfMonths;

        cout << "\n--- Employee Earnings Analysis ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;

        cout << "\nMonthly Earnings:" << endl;

        for(int i = 0; i < numberOfMonths; i++) {
            cout << "Month " << i + 1 << ": "
                 << monthlyEarnings[i] << endl;
        }

        cout << "\nTotal Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << average << endl;

        cout << "Highest Earning: "
             << monthlyEarnings[highestMonth] << endl;

        cout << "Highest Earning Month: "
             << highestMonth + 1 << endl;
    }

    // Deallocate memory
    void releaseMemory() {
        delete[] monthlyEarnings;
        monthlyEarnings = nullptr;
    }
};

int main() {
    Employee emp;

    emp.accept();

    emp.displayAnalysis();

    emp.releaseMemory();

    return 0;
}