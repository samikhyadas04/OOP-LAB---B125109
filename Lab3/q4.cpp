#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    float *arr = new float[n];

    cout << "Enter" << " " << n << " " << "elements" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // display
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = sum / n;
    cout << "The sum : " << sum << endl;
    cout << "The average: " << average << endl;
    delete[] arr;
    return 0;
}
