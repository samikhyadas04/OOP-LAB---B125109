#include <iostream>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    // + operator
    Product operator+(Product p) {
        if (name == p.name && price == p.price) {
            return Product(name, price, quantity + p.quantity);
        }

        cout << "Products cannot be combined." << endl;
        return *this;
    }

    // > operator
    bool operator>(Product p) {
        return (price * quantity) > (p.price * p.quantity);
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main() {
    Product p1("Book", 100, 2);
    Product p2("Book", 100, 3);

    Product p3 = p1 + p2;

    cout << "After combining:" << endl;
    p3.display();

    cout << endl;

    if (p1 > p2)
        cout << "Product 1 has higher total value.";
    else if (p2 > p1)
        cout << "Product 2 has higher total value.";
    else
        cout << "Both products have equal total value.";

    return 0;
}