#include<iostream>
using namespace std;
class Mobile 
{
private :
    int battery;
    string model;
    string brand;
public:

    void input() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter battery % : ";
        cin >> battery;
    }
friend void check(Mobile m);
};
void check(Mobile m) {
    cout << "\n--MOBILE DETAILS--\n";
    cout << "Brand: " << m.brand << endl;
    cout << "Model: " << m.model << endl;
    cout << "Battery: " << m.battery<< endl;
    if(m.battery < 20) {
        cout << "battery is low" << endl;
    }
    else {
        cout << "battery normal" << endl;
    }
}

int main() {
    Mobile m;
    m.input();
    check(m);
    return 0;
}
