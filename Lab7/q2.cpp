#include <iostream>
using namespace std;

class Vehicle {
protected:
    int reg_num;
    int days;
public:
    Vehicle(int reg, int d) {
        reg_num = reg;
        days = d;
    }
};

class Car : public Vehicle {
protected:
    int daily_rate;
public:
    Car(int reg, int d, int rate) : Vehicle(reg, d) {
        daily_rate = rate;
    }
};

class Luxury : public Car {
protected:
    int luxury_charge;
public:
    Luxury(int reg, int d, int rate, int luxury)
        : Car(reg, d, rate) {
        luxury_charge = luxury;
    }
    void display() {
        double totalcost =
            (daily_rate + luxury_charge) * days;
        cout << "Registration Number: " << reg_num << endl;
        cout << "Rental Days: " << days << endl;
        cout << "Daily Rate: " << daily_rate << endl;
        cout << "Luxury Charge: " << luxury_charge << endl;
        cout << "Total Rental Cost: " << totalcost << endl;
    }
};

int main() {
    Luxury car(67, 5, 100, 1000);
    car.display();
    return 0;
}