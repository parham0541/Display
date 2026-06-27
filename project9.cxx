#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    string name;
    float price;
    int quantity;

    float totalValue()
    {
        return price * quantity;
    }
};

int main()
{
    Product p;

    p.name = "Laptop";
    p.price = 500;
    p.quantity = 10;

    cout << "Product Name: " << p.name << endl;
    cout << "Price: " << p.price << endl;
    cout << "Quantity: " << p.quantity << endl;
    cout << "Total Value: " << p.totalValue() << endl;

    return 0;
}