#include <iostream>
using namespace std;
int compare(int a, int b) {
    return (a > b) ? a : b;
}
float compare(float a, float b) {
    return (a > b) ? a : b;
}
bool compare(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i])
            return false;
    }

    return true;
}

int main() {

    int a = 20, b = 15;
    float x = 12.5f, y = 18.7f;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    cout << "Larger integer: " << compare(a, b) << endl;
    cout << "Larger floating-point number: "
         << compare(x, y) << endl;
    if (compare(arr1, arr2, 5))
        cout << "Both arrays are identical." << endl;
    else
        cout << "Arrays are not identical." << endl;

    return 0;
}