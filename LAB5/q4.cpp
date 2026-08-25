#include <iostream>
using namespace std;

int search(int arr[], int n, int elem) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}
int search(char arr[], int n, char elem) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}
int search(int arr[], int n, int elem, int l) {
    for (int i = 0; i < l; i++) {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}

int main() {
    int intArr[] = {3, 4, 5, 6, 7, 8, 9};
    char charArr[] = {'a', 'b', 'c', 'd'};
    int result1 = search(intArr, 7, 9);
    if (result1 != -1)
        cout << "Integer found at position: " << result1 << endl;
    else
        cout << "Integer does not exist" << endl;
    int result2 = search(charArr, 4, 'a');
    if (result2 != -1)
        cout << "Character found at position: " << result2 << endl;
    else
        cout << "Character does not exist" << endl;
    int result3 = search(intArr, 7, 9, 3);
    if (result3 != -1)
        cout << "Integer found at position: " << result3 << endl;
    else
        cout << "Integer does not exist in the specified range" << endl;
    return 0;
}