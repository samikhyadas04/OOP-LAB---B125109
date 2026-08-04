#include <iostream>
#include <string>
using namespace std;

// Class to store product details
class Product {
private:
    int productID;
    string productName;
    int quantity;
    float price;

public:
    // Function to accept product details
    void acceptDetails() {
        cout << "Enter Product ID: ";
        cin >> productID;

        cin.ignore(); // Clear input buffer

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity Available: ";
        cin >> quantity;

        cout << "Enter Price per Unit: ";
        cin >> price;
    }

    // Function to display product details
    void displayDetails() {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID        : " << productID << endl;
        cout << "Product Name      : " << productName << endl;
        cout << "Quantity Available: " << quantity << endl;
        cout << "Price per Unit    : " << price << endl;
    }

    // Function to update quantity after selling units
    void sellProduct() {
        int soldqty;

        cout << "\nEnter quantity to sell: ";
        cin >> soldqty;

        if (soldqty <= quantity) {
            quantity -= soldqty;
            cout << "Sale successful!" << endl;
        } else {
            cout << "Sale unsuccessful! Insufficient stock." << endl;
        }
    }

    // Function to calculate and display inventory value
    void inventoryValue() {
        float totalValue = quantity * price;

        cout << "\nInventory Value = " << totalValue << endl;
    }
};

int main() {
    Product p;

    // Accept product details
    p.acceptDetails();

    // Display details
    p.displayDetails();

    // Sell product
    p.sellProduct();

    // Display updated details
    p.displayDetails();

    // Display inventory value
    p.inventoryValue();

    return 0;
}