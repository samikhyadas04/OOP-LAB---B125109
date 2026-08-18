#include <iostream>
using namespace std;
class FoodOrder
{
private:
    int orderID;
    string foodItem;
    int quantity;
    float price;
public:
    void input()
    {
        cout << "Enter Order ID: ";
        cin >> orderID;
        cout << "Enter Food Item: ";
        cin >> foodItem;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
    }
    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f)
{
    float totalBill = f.quantity * f.price;
    cout << "\n--- Order Details ---" << endl;
    cout << "Order ID: " << f.orderID << endl;
    cout << "Food Item: " << f.foodItem << endl;
    cout << "Quantity: " << f.quantity << endl;
    cout << "Price: " << f.price << endl;
    cout << "Total Bill: " << totalBill << endl;
}

int main()
{
    FoodOrder order;
    cout << "Enter Food Order Details:" << endl;
    order.input();
    calculateBill(order);
    return 0;
}