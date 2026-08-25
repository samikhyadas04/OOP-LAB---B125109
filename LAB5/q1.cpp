#include<iostream>
using namespace std;

int calculate(int a, int b) {
    return a + b;
}
int calculate(int a, int b, int c) {
    return a + b + c;
}

float calculate(float a, float b) {
    return a + b;
}
int main() {
    int a = 10, b = 20, c = 30;
    float x = 20.5f, y = 30.5f;
    cout << "Result for two integers: " << calculate(a, b) << endl;

    cout << "Result for three integers: " << calculate(a, b, c) << endl;

    cout << "Result for two floating-point values: " << calculate(x, y) << endl;

    return 0;

}
