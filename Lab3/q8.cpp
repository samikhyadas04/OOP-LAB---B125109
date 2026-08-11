#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    int numberOfSubjects;
    float *marks;

public:
    // Constructor
    Student() {
        marks = nullptr;
    }

    // Accept student details
    void acceptDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Number of Subjects: ";
        cin >> numberOfSubjects;

        // Dynamically allocate marks array
        marks = new float[numberOfSubjects];

        // Accept marks
        cout << "Enter marks for " << numberOfSubjects << " subjects:" << endl;

        for(int i = 0; i < numberOfSubjects; i++) {
            cin >> marks[i];
        }
    }

    // Calculate and display result
    void displayResult() {
        float total = 0;

        for(int i = 0; i < numberOfSubjects; i++) {
            total += marks[i];
        }

        float average = total / numberOfSubjects;

        cout << "\n--- Student Result ---" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << numberOfSubjects << endl;

        cout << "Marks: ";
        for(int i = 0; i < numberOfSubjects; i++) {
            cout << marks[i] << " ";
        }

        cout << "\nTotal Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }

    // Release dynamically allocated memory
    void releaseMemory() {
        delete[] marks;
        marks = nullptr;
    }
};

int main() {
    Student s;

    s.acceptDetails();
    s.displayResult();

    s.releaseMemory();

    return 0;
}