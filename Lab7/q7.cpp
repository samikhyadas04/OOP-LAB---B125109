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
    }
};

class Student : virtual public Person {
protected:
    int rollNo;
    float cgpa;

public:
    Student(string n, int a, int r, float c)
        : Person(n, a) {
        rollNo = r;
        cgpa = c;
    }
};

class Employee : virtual public Person {
protected:
    int employeeID;
    double salary;

public:
    Employee(string n, int a, int id, double s)
        : Person(n, a) {
        employeeID = id;
        salary = s;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, float c,
                      int id, double s)
        : Person(n, a),
          Student(n, a, r, c),
          Employee(n, a, id, s) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    TeachingAssistant ta(
        "Sam", 19, 101, 8.9, 5001, 30000
    );

    ta.display();

    return 0;
}