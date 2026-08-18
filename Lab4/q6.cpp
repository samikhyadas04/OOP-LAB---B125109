#include <iostream>
using namespace std;
class Door
{
private:
    int doorNumber;
    bool lockStatus;
public:
    void input()
    {
        cout << "Enter Door Number: ";
        cin >> doorNumber;
        cout << "Enter Lock Status (1 for Locked, 0 for Unlocked): ";
        cin >> lockStatus;
    }
    friend class SecuritySystem;
};
class SecuritySystem
{
public:
    void checkLockStatus(Door d) {
        cout << "\n--- Door Details ---" << endl;
        cout << "Door Number: " << d.doorNumber << endl;
        if (d.lockStatus) {
            cout << "Status: Locked" << endl;
        }
        else {
            cout << "Status: Unlocked" << endl;
        }
    }
};

int main()
{
    Door d;
    SecuritySystem s;
    d.input();
    s.checkLockStatus(d);
    return 0;
}