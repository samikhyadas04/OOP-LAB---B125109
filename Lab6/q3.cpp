#include <iostream>
using namespace std;

int main() {
    int books[6] = {101, 102, 103, 104, 105, 106};
    int *ptr = books;
    cout << "Book IDs and their corresponding addresses:\n";
    for (int i = 0; i < 6; i++) {
        cout << "Book ID: \n" << *ptr;
        cout << "\n Address: " << ptr << endl;
        ptr++;
    }
    return 0;
}