#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;
public:
    // Input distance
    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    // Add two distances
    Distance add(Distance d) {
        Distance temp;

        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        // Convert inches to feet if 12 or more
        if (temp.inches >= 12) {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp;
    }

    // Display distance
    void display() {
        cout << feet << " ft " << inches << " in" << endl;
    }
};

int main() {
    Distance d1, d2, result;
    cout << "Enter first distance:\n";
    d1.input();
    cout << "\nEnter second distance:\n";
    d2.input();
    result = d1.add(d2);
    cout << "\nTotal Distance: ";
    result.display();
    return 0;
}