#include <iostream>
using namespace std;
int modify(int a, int value) {
    return a + value;
}
float modify(float a, float value) {
    return a + value;
}
void modify(int *a, int value) {
    *a = *a + value;
}

int main() {
    int num = 10;
    float fnum = 10.5f;
    int ptrNum = 20;
    cout << "Integer before modification: " << num << endl;
    num = modify(num, 5);
    cout << "Integer after modification: " << num << endl;
    cout << "\nFloating-point before modification: " << fnum << endl;
    fnum = modify(fnum, 5.5f);
    cout << "Floating-point after modification: " << fnum << endl;
    cout << "\nPointer integer before modification: " << ptrNum << endl;
    modify(&ptrNum, 10);
    cout << "Pointer integer after modification: " << ptrNum << endl;
    return 0;
}