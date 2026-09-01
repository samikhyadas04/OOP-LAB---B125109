#include<iostream>
using namespace std;

void grocery(double *ptr, int n) {
    double highest = *ptr;
    for(int i = 1; i < n; i++) {
        ptr++;
        if(*ptr > highest) { 
            highest = *ptr;
        }
    }
    cout << "Highest grocery price: " << highest << endl;
}
int main() {
    double arr[7];
    cout << "Enter the array : " << endl;
    for(int i = 0; i < 7; i++) {
        cin >> arr[i];
    }
    grocery(arr,7);
    return 0;
}