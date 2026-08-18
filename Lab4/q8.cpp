#include <iostream>
using namespace std;
class TrainSeat
{
private:
    int seatNumber;
    string passengerName;
    bool bookingStatus;
public:
    void input() {
        cout << "Enter Seat Number: ";
        cin >> seatNumber;
        cout << "Is the seat booked? (1 for Yes, 0 for No): ";
        cin >> bookingStatus;
        if (bookingStatus) {
            cout << "Enter Passenger Name: ";
            cin >> passengerName;
        }
    }
    friend class TicketChecker;
};
class TicketChecker {
public:
    void displayDetails(TrainSeat s)
    {
        cout << "\n--- Seat Details ---" << endl;
        cout << "Seat Number: " << s.seatNumber << endl;
        if (s.bookingStatus) {
            cout << "Booking Status: Booked" << endl;
            cout << "Passenger Name: " << s.passengerName << endl;
        }
        else {
            cout << "Booking Status: Available" << endl;
        }
    }
    void checkBooking(TrainSeat s) {
        if (s.bookingStatus)
            cout << "Seat is Booked." << endl;
        else
            cout << "Seat is Available." << endl;
    }
};

int main() {
    TrainSeat seat;
    TicketChecker checker;
    cout << "Enter Train Seat Details:" << endl;
    seat.input();
    checker.displayDetails(seat);
    cout << "\n--- Booking Status ---" << endl;
    checker.checkBooking(seat);
    return 0;
}