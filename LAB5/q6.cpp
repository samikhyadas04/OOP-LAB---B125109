#include <iostream>
using namespace std;
void display(int a) {
    cout << "Integer: " << a << endl;
}
void display(float a) {
    cout << "Floating-point number: " << a << endl;
}
void display(char a) {
    cout << "Character: " << a << endl;
}
void display(int arr[], int n) {
    cout << "Integer array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void display(char arr[], int n) {
    cout << "Character array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int num = 10;
    float decimal = 12.5f;
    char ch = 'A';
    int intArr[] = {1, 2, 3, 4, 5};
    char charArr[] = {'a', 'b', 'c', 'd'};
    display(num);
    display(decimal);
    display(ch);
    display(intArr, 5);
    display(charArr, 4);
    return 0;
}