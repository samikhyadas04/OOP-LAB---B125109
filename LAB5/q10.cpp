#include <iostream>
using namespace std;
int calculate(int a, int b) {
    return a + b;
}
float calculate(int a, float b) {
    return a + b;
}
float calculate(float a, float b) {
    return a + b;
}
int calculate(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int calculate(int *a, int *b) {
    return *a + *b;
}

int main() {
    int a = 10, b = 20;
    float x = 10.5f, y = 20.5f;
    int arr[] = {1, 2, 3, 4, 5};
    int p = 30, q = 40;
    cout << "Sum of two integers: " << calculate(a, b) << endl;
    cout << "Sum of integer and floating-point value: " << calculate(a, x) << endl;
    cout << "Sum of two floating-point values: " << calculate(x, y) << endl;
    cout << "Sum of integer array: " << calculate(arr, 5) << endl;
    cout << "Sum using two integer pointers: " << calculate(&p, &q) << endl;
    return 0;
}