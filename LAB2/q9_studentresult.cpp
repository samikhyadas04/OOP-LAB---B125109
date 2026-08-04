#include <iostream>
#include <string>
using namespace std;
// Class to store student result details
class StudentResult {
private:
    string studentName;
    int rollNumber;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    // Function to accept student details
    void acceptDetails() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cin.ignore(); // Clear input buffer

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter marks in 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Function to calculate total, percentage and grade
    void calculateResult() {
        total = 0;

        // Calculate total marks
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }

        // Calculate percentage
        percentage = (total / 500.0) * 100;

        // Assign grade
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    // Function to display the result
    void displayResult() {
        cout << "\n----- Student Result -----" << endl;
        cout << "Student Name : " << studentName << endl;
        cout << "Roll Number  : " << rollNumber << endl;
        cout << "Total Marks  : " << total << "/500" << endl;
        cout << "Percentage   : " << percentage << "%" << endl;
        cout << "Grade        : " << grade << endl;
    }
};

int main() {
    StudentResult s;

    // Accept student details
    s.acceptDetails();

    // Calculate result
    s.calculateResult();

    // Display result
    s.displayResult();

    return 0;
}