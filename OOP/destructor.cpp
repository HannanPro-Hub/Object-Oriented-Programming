#include <iostream>

using namespace std;

class Laptop
{
private:
    string brand;
    double price;

public:
    Laptop(string brand, double price)
    {
        cout << "Laptop Constructor Called\n";
        this->brand = brand;
        this->price = price;
    }

    void display()
    {
        cout << "Brand : " << brand;
        cout << "\nPrice : " << price << "\n\n";
    }
    ~Laptop()
    {
        cout << "Laptop Destructor Called\n";
    }
};

int main()
{
    Laptop l1("HP", 80000);
    cout << "Laptop 1\n";
    l1.display();

    Laptop l2("Dell", 90000);
    cout << "Laptop 2\n";
    l2.display();

    {
        Laptop l3("Lenovo", 70000);
        cout << "Laptop 3\n";
        l3.display();
    }

    return 0;
}