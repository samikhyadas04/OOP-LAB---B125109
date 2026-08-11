#include <iostream>
using namespace std;

class Employee {
private:
    int empid;
    string empname;
    float salary;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empid;

        cout << "Enter Employee Name: ";
        cin >> empname;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Name: " << empname << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *emp = new Employee[n];

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << ":" << endl;
        emp[i].accept();
    }

    cout << "\n--- Employee Details ---" << endl;

    for(int i = 0; i < n; i++) {
        emp[i].display();
    }

    delete[] emp;

    return 0;
}