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
    cout << " \n Result are" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "The largest element" << " " << largest << endl;
    delete[] arr;
    return 0;

}