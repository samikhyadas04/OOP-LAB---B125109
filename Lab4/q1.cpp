#include<iostream>
using namespace std;
class Diary
{
    private:
    string ownername;
    int numberofentries;
    string lastentry;

public:
void input() {
    cout << "Enter owner name:";
    cin >> ownername;
    cout << "Enter number of entries: ";
    cin >> numberofentries;
    cout << "Enter last entry: ";
    cin >> lastentry;
}

friend void displayDiary(Diary d);
};

void displayDiary(Diary d) {
    cout << "\n -- Diary Details--\n";
    cout << "Owner Name: " << d.ownername << endl;
    cout << "Number of entries: " << d.numberofentries << endl;
    cout << "Last Entry: " << d.lastentry << endl;
}
int main() {
    Diary d;
    d.input();
    displayDiary(d);
    return 0;
}