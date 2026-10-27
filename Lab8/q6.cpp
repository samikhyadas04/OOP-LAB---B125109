#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) {
        cout << "Scanning for threats..." << endl;
    }
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "Threats detected: "
             << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int removed = threats * 90 / 100;
        int remaining = threats - removed;

        cout << "Threats detected: "
             << threats << endl;
        cout << "Threats removed: "
             << removed << endl;
        cout << "Threats remaining: "
             << remaining << endl;
    }
};

int main() {
    BasicScanner basic;
    AdvancedScanner advanced;

    basic.scan(100);
    advanced.scan(100);

    return 0;
}