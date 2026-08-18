#include <iostream>
using namespace std;
class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    bool powerStatus;
public:
    void input() {
        cout << "Enter Device Name: ";
        cin >> deviceName;
        cout << "Enter Device Type: ";
        cin >> deviceType;
        cout << "Enter Power Status (1 for ON, 0 for OFF): ";
        cin >> powerStatus;
    }
    friend class HomeController;
};

class HomeController {
public:
    void displayInfo(SmartDevice d) {
        cout << "\n--- Device Information ---" << endl;
        cout << "Device Name: " << d.deviceName << endl;
        cout << "Device Type: " << d.deviceType << endl;
    }
    void turnOn(SmartDevice &d) {
        d.powerStatus = true;
        cout << "\nDevice turned ON." << endl;
    }
    void turnOff(SmartDevice &d) {
        d.powerStatus = false;
        cout << "\nDevice turned OFF." << endl;
    }

    void displayStatus(SmartDevice d) {
        cout << "Current Power Status: ";
        if (d.powerStatus)
            cout << "ON" << endl;
        else
            cout << "OFF" << endl;
    }
};

int main()
{
    SmartDevice device;
    HomeController controller;
    cout << "Enter Smart Device Details:" << endl;
    device.input();
    controller.displayInfo(device);
    cout << "\n--- Current Status ---" << endl;
    controller.displayStatus(device);
    int choice;
    cout << "\n1. Turn ON" << endl;
    cout << "2. Turn OFF" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 1) {
        controller.turnOn(device);
    }
    else if (choice == 2) {
        controller.turnOff(device);
    }
    else {
        cout << "Invalid choice." << endl;
    }
    cout << "\n--- Updated Status ---" << endl;
    controller.displayStatus(device);
    return 0;
}