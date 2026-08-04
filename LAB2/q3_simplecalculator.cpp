#include <iostream>
using namespace std;
class Calculator {
    float a;
    float b;
public:
    // Function to read two numbers
    void readvalues() {
        cout << "Enter value 1: ";
        cin >> a;
        cout << "Enter value 2: ";
        cin >> b;
    }
    // Addition
    float cadd() {
        return a + b;
    }
    // Subtraction
    float csub() {
        return a - b;
    }
    // Multiplication
    float cmul() {
        return a * b;
    }
    // Division
    float cdiv() {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Division not possible! Cannot divide by zero." << endl;
            return 0;   
        }
    }
    // Display all results
    void display() {
        cout << "\nAddition = " << cadd() << endl;
        cout << "Subtraction = " << csub() << endl;
        cout << "Multiplication = " << cmul() << endl;

        if (b != 0)
            cout << "Division = " << cdiv() << endl;
        else
            cdiv(); 
    }
};

int main() {
    Calculator c;
    c.readvalues();
    c.display();
    return 0;
}