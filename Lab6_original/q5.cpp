#include<iostream>
using namespace std;
class Time{
    int hour, min;
public:
Time(int h = 0, int m = 0) {
hour = h;
min = m;
}
void display() {
    cout << hour << "hours" << min << "minutes" << endl;
}

Time operator+(Time t) {
    Time temp;
    temp.hour = hour + t.hour;
    temp.min = min + t.min;
    if(temp.min >= 60) {
        temp.hour++;
        temp.min -= 60;
    }
    return temp;
}
};
int main() {
    Time t1(40, 20);
    Time t2(3,8);
    Time t3 = t1 + t2;
    t1.display();
    t2.display();
    t3.display();
    return 0;

}