#include <iostream>
using namespace std;
class Exam
{
private:
    string studentName;
    string subject;
    float marks;
    float maximumMarks;
public:
    void input() {
        cout << "Enter Student Name: ";
        cin >> studentName;
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Marks: ";
        cin >> marks;
        cout << "Enter Maximum Marks: ";
        cin >> maximumMarks;
    }
    friend class Result;
};
class Result
{
public:
    void displayResult(Exam e)  {
        float percentage = (e.marks / e.maximumMarks) * 100;
        cout << "\n--- Complete Result ---" << endl;
        cout << "Student Name: " << e.studentName << endl;
        cout << "Subject: " << e.subject << endl;
        cout << "Marks: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maximumMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Exam e;
    Result r;
    cout << "Enter Exam Details:" << endl;
    e.input();
    r.displayResult(e);
    return 0;
}