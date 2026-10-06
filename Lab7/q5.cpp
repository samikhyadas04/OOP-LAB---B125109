#include <iostream>
using namespace std;

class Academic {
protected:
    int math, physics, programming;

public:
    Academic(int m, int p, int pr) {
        math = m;
        physics = p;
        programming = pr;
    }
};

class Sports {
protected:
    int sportsMarks;

public:
    Sports(int s) {
        sportsMarks = s;
    }
};

class StudentResult : public Academic, public Sports {
public:
    StudentResult(int m, int p, int pr, int s)
        : Academic(m, p, pr), Sports(s) {}

    void display() {
        int total = math + physics + programming + sportsMarks;
        double average = total / 4.0;

        cout << "Mathematics: " << math << endl;
        cout << "Physics: " << physics << endl;
        cout << "Programming: " << programming << endl;
        cout << "Sports: " << sportsMarks << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    StudentResult student(85, 80, 90, 88);

    student.display();

    return 0;
}