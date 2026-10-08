#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    int productId;
    string name;
    float price;
    int quantity;

public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void calculateTotal()
    {
        float total;
        total = price * quantity;

        cout << "Total Cost: " << total << "\n";
    }

    void display()
    {
        cout << "\n" << "Product Details" << "\n";
        cout << "Product ID: " << productId << "\n";
        cout << "Product Name: " << name << "\n";
        cout << "Price: " << price << "\n";
        cout << "Quantity: " << quantity << "\n";

        calculateTotal();
    }
};

int main()
{
    Product product1;

    product1.input();
    product1.display();

    return 0;
}