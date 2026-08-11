#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    // Function to accept student details
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Dynamically create an object
    Student *s = new Student;

    // Access member functions using ->
    s->accept();
    s->display();

    // Deallocate memory
    delete s;

    return 0;
}