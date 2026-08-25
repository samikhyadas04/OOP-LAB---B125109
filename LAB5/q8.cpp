#include <iostream>
using namespace std;
int count(int n) {
    int digits = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    while (n != 0) {
        digits++;
        n = n / 10;
    }
    return digits;
}
// Counting number of elements in an integer array
int count(int arr[], int n) {
    return n;
}
int count(char arr[], int n, char ch) {
    int occurrences = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == ch)
            occurrences++;
    }
    return occurrences;
}

int main() {
    int num = 12345;
    int arr[] = {10, 20, 30, 40, 50};
    char charArr[] = {'a', 'b', 'a', 'c', 'a', 'd'};
    cout << "Number of digits: " << count(num) << endl;
    cout << "Number of elements in integer array: "
         << count(arr, 5) << endl;
    cout << "Occurrences of 'a': "
         << count(charArr, 6, 'a') << endl;
    return 0;
}