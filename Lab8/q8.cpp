#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double cpuHours) {
        cout << "Calculating cloud cost..." << endl;
    }
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5.0;

        if (cpuHours > 100)
            cost = cost * 0.85;

        cout << "Standard instance cost: Rs. "
             << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12.0;

        if (cpuHours > 100)
            cost = cost * 0.85;

        cout << "Premium instance cost: Rs. "
             << cost << endl;
    }
};

int main() {
    StandardInstance standard;
    PremiumInstance premium;

    standard.calculateCost(120);
    premium.calculateCost(120);

    return 0;
}