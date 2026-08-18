#include <iostream>
using namespace std;
class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    void input() {
        cout << "Enter Player Name: ";
        cin >> playerName;
        cout << "Enter Health: ";
        cin >> health;
        cout << "Enter Score: ";
        cin >> score;
        cout << "Enter Level: ";
        cin >> level;
    }
    friend class GameManager;
};
class GameManager
{
public:
    void displayDetails(Player p) {
        cout << "\n--- Player Details ---" << endl;
        cout << "Player Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }
    void checkAlive(Player p) {
        if (p.health > 0)
            cout << "Player is Alive." << endl;
        else
            cout << "Player is Dead." << endl;
    }

    void displayLevelScore(Player p) {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main()
{
    Player p;
    GameManager gm;
    cout << "Enter Player Details:" << endl;
    p.input();
    gm.displayDetails(p);
    cout << "\n--- Player Status ---" << endl;
    gm.checkAlive(p);
    cout << "\n--- Level and Score ---" << endl;
    gm.displayLevelScore(p);
    return 0;
}