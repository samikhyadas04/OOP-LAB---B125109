#include <iostream>
using namespace std;
class Rectangle { // Class to represent a Rectangle
private:
    float length, breadth;   // Data members to store dimensions
public:
    // Function to read length and breadth from the user
    void readDimensions() {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the breadth of the rectangle: ";
        cin >> breadth;
    }
    // Function to calculate the area
    float cArea() {
        return length * breadth;
    }
    // Function to calculate the perimeter
    float cPerimeter() {
        return 2 * (length + breadth);
    }
    // Function to display all results
    void displayResults() {
        cout << "\n----- Rectangle Details -----" << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << cArea() << endl;
        cout << "Perimeter: " << cPerimeter() << endl;
    }
};

int main() {
    Rectangle r;  // Create an object of Rectangle class
    // Read dimensions
    r.readDimensions();
    // Display area and perimeter
    r.displayResults();

    return 0;
}