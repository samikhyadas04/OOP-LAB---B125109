#include <iostream>
using namespace std;
class ParkingSlot
{
private:
    int slotNumber;
    string vehicleNumber;
    bool occupancyStatus;

public:
    void input()
    {
        cout << "Enter Slot Number: ";
        cin >> slotNumber;
        cout << "Is the slot occupied?: "; // 1 for yes 0 for no
        cin >> occupancyStatus;
        if (occupancyStatus == 1)
        {
            cout << "Enter Vehicle Number: ";
            cin >> vehicleNumber;
        }
    }

    friend void checkSlot(ParkingSlot p);
};

void checkSlot(ParkingSlot p)
{
    cout << "\n--- Parking Slot Details ---" << endl;
    cout << "Slot Number: " << p.slotNumber << endl;
    if (p.occupancyStatus) {
        cout << "Status: Occupied" << endl;
        cout << "Vehicle Number: " << p.vehicleNumber << endl;
    }
    else {
        cout << "Status: Available" << endl;
    }
}

int main()
{
    ParkingSlot slot;
    slot.input();
    checkSlot(slot);
    return 0;
}