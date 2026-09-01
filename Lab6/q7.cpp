#include <iostream>
using namespace std;

int main() {
    char sentence[500];
    int uppercase = 0;
    int lowercase = 0;
    int spaces = 0;
    cout << "Enter a sentence of your wish: ";
    cin.getline(sentence, 500);
    char *ptr = sentence;
    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
        uppercase++;
        }
        else if (*ptr >= 'a' && *ptr <= 'z') {
        lowercase++;
        }
        else if (*ptr == ' ') {
        spaces++;
        }
        ptr++;
    }
    cout << "Uppercase _letters: " << uppercase << endl;
    cout << "Lowercase _letters: " << lowercase << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}