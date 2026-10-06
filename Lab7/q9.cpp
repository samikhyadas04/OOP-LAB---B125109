#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;

        cout << "Person constructor" << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;
    double salary;

public:
    Employee(string n, int a, int id, double s)
        : Person(n, a) {
        employeeID = id;
        salary = s;

        cout << "Employee constructor" << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int a, int id,
            double s, string dept)
        : Employee(n, a, id, s) {
        department = dept;

        cout << "Manager constructor" << endl;
    }

    void display() {
        cout << "\nEmployee Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager manager(
        "Sam", 19, 5001, 60000, "Technology"
    );

    manager.display();

    return 0;
}