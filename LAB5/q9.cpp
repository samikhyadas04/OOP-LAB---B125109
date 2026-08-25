#include <iostream>
using namespace std;
int maximum(int a, int b) {
    return (a > b) ? a : b;
}
int maximum(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}
int maximum(int *arr, int n) {
    int max = *arr;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max)
            max = *(arr + i);
    }
    return max;
}

int main() {
    int a = 10, b = 25;
    int x = 40, y = 30;
    int arr[] = {12, 45, 23, 67, 34};
    cout << "Maximum of two integers: "
         << maximum(a, b) << endl;
    cout << "Maximum using two integer pointers: "
         << maximum(&x, &y) << endl;
    cout << "Maximum in integer array: "
         << maximum(arr, 5) << endl;
    return 0;
}