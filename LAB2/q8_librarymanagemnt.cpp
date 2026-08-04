#include <iostream>
#include <string>
using namespace std;
// Class to manage library book details
class LibraryBook {
private:
    int bookID;
    string bookTitle;
    string studentName;
    int daysIssued;
    float fine;

public:
    // Function to enter book and student details
    void enterDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cin.ignore(); // Clear input buffer

        cout << "Enter Book Title: ";
        getline(cin, bookTitle);

        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Number of Days Book was Issued: ";
        cin >> daysIssued;
    }

    // Function to calculate fine
    void calculateFine() {
        if (daysIssued > 15) {
            fine = (daysIssued - 15) * 2;
        } else {
            fine = 0;
            cout << "No fine" << endl;
        }
    }

    // Function to display transaction details
    void displayDetails() {
        cout << "\n----- Library Transaction Details -----" << endl;
        cout << "Book ID          : " << bookID << endl;
        cout << "Book Title       : " << bookTitle << endl;
        cout << "Student Name     : " << studentName << endl;
        cout << "Days Issued      : " << daysIssued << endl;
        cout << "Fine             : Rs. " << fine << endl;
    }
};

int main() {
    LibraryBook book;

    // Enter details
    book.enterDetails();

    // Calculate fine
    book.calculateFine();

    // Display details
    book.displayDetails();

    return 0;
}