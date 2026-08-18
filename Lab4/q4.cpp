#include <iostream>
using namespace std;
class Song
{
private:
    string songname;
    string artistname;
    float duration;
public:
    void input()
    {
        cout << "Enter song name: ";
        cin >> songname;
        cout << "Enter artist name: ";
        cin >> artistname;
        cout << "Enter duration: ";
        cin >> duration;
    }
    friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2)
{
    if (s1.duration > s2.duration)
    {
        cout << "\n" << s1.songname << " is longer." << endl;
    }
    else if (s1.duration < s2.duration)
    {
        cout << "\n" << s2.songname << " is longer." << endl;
    }
    else
    {
        cout << "\nBoth songs have the same duration." << endl;
    }
}
int main()
{
    Song s1, s2;
    cout << "Enter details of Song 1:" << endl;
    s1.input();
    cout << "\nEnter details of Song 2:" << endl;
    s2.input();
    compareSongs(s1, s2);
    return 0;
}