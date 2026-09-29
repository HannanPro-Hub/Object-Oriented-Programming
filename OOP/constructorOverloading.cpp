#include <iostream>

using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;

public:
    Product()
    {
        name = "UNKNOWN";
        price = 0;
        quantity = 0;
    }
    Product(string name, double price, int quantity)
    {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
    Product(string name, double price)
    {
        this->name = name;
        this->price = price;
        this->quantity = 1;
    }
    void display()
    {
        cout << "Product Name : " << name;
        cout << "\nPrice : " << price;
        cout << "\nQuantity : " << quantity;
        cout << "\nTotal Price : " << price * quantity << "\n\n";
    }
};

int main()
{
    Product user1;
    Product user2("Fruits", 700, 3);
    Product user3("Toys", 800);

    user1.display();
    user2.display();
    user3.display();

    return 0;
}