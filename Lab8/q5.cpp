#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) {
        cout << "Calculating water requirement..." << endl;
    }
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 2 * (100 - moisture);

        cout << "Drip irrigation water: "
             << water << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 3 * (100 - moisture);

        cout << "Sprinkler irrigation water: "
             << water << " litres" << endl;
    }
};

int main() {
    DripIrrigation drip;
    SprinklerIrrigation sprinkler;

    double moisture = 40;

    drip.calculateWater(moisture);
    sprinkler.calculateWater(moisture);

    return 0;
}