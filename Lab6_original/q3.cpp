#include<iostream>
using namespace std;
class Student{
    int marks;
    string name;

public:
Student(string n, int m) {
    name = n;
    marks = m;
}
bool operator>(Student s) {
    return marks > s.marks;
}
string getName() {
    return name;
}
int getMarks() {
    return marks;
}
};

int main() {
    Student s1("Rahul", 85);
    Student s2("sam", 82);
    if(s2 > s1) {
        cout << s1.getName() << "has highest marks";
    }
    else if (s2 > s1)
        cout << s2.getName() << " has higher marks.";
    else
        cout << "Both students have equal marks.";

    return 0;
}
