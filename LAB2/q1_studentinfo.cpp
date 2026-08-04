#include <iostream>
using namespace std;

// Define a class named Student
class Student {
private:
    int rollnumber;  
    string name;      
    int marks;        

public:
    // Function to take input from user
    void input() {
        cout << "Enter roll number: ";
        cin >> rollnumber;  
        cout << "Enter name: ";
        cin >> name;       
        cout << "Enter marks: ";
        cin >> marks;       
    }

    // Function to display student details
    void display() {
        cout << "\n---Student Details----\n";
        cout << "Roll Number : " << rollnumber << endl;
        cout << "Name: " << name << endl;    
        cout << "Marks: " << marks << endl;            
    }
};

// Main function - entry point of program
int main() {
    Student s;    // Create object of Student class
    s.input();    // Call input function
    s.display();  // Call display function

    return 0;
}