#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter" << " " << n << " " << "elements" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // display
    cout << "Result are" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}