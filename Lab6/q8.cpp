
#include <iostream>
using namespace std;
void increaseScores(int *scores, int n) {
    for (int i = 0; i < n; i++) {
        *scores = *scores + 10;
        scores++;
    }
}
int main() {
    int n;
    cout << "Enter number of players who are playing the game: ";
    cin >> n;
    int scores[n];
    cout << "Enter scores entertained from the players:\n";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    cout << "Scores before update of the result: ";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }
    increaseScores(scores, n);
    cout << "\nScores after update of the result: ";
    for (int i = 0; i < n; i++) {
        cout << scores[i] << " ";
    }
    return 0;
}
