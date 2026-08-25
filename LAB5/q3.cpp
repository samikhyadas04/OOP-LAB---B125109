#include<iostream>
using namespace std;
int total(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
float total(float arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum;
}
int total(int arr[], int n, int elements) {
    int sum = 0;
    for (int i = 0; i < elements; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    float floatArr[] = {10.5, 20.5, 30.5, 40.5};
    cout << "Total of integer array: " << total(intArr, 5) << endl;
    cout << "Total of floating-point array: " << total(floatArr, 4) << endl;
    cout << "Total of first 3 elements of integer array: " << total(intArr, 5, 3) << endl;
    return 0;
}
