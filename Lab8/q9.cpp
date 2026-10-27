#include <iostream>
using namespace std;

class Robot {
public:
    virtual void move(double distance) {
        cout << "Robot is moving." << endl;
    }

    virtual ~Robot() {}
};

class WheeledRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 2.0;

        cout << "Wheeled robot travel time: "
             << time << " seconds" << endl;
    }
};

class TrackedRobot : public Robot {
public:
    void move(double distance) override {
        double time = distance / 1.2;

        cout << "Tracked robot travel time: "
             << time << " seconds" << endl;
    }
};

int main() {
    WheeledRobot wheeled;
    TrackedRobot tracked;

    Robot* ptr;

    ptr = &wheeled;
    ptr->move(12);

    ptr = &tracked;
    ptr->move(12);

    return 0;
}