#include <iostream>
using namespace std;
int larger(int a, int b) {
    return (a > b) ? a : b; //ternary operator
}
float larger(float a, float b) {
    return (a > b) ? a : b; //ternary operator
}
int larger(int a, int b, int c) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main() {
    int a = 10, b = 25, c = 15;
    float x = 12.5f, y = 18.7f;

    cout << "Larger of two integers: "
         << larger(a, b) << endl;
    cout << "Larger of two floating-point numbers: "
         << larger(x, y) << endl;
    cout << "Larger of three integers: "
         << larger(a, b, c) << endl;
    return 0;
}