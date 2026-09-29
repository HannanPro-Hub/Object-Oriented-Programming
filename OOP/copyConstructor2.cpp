#include <iostream>

using namespace std;

class Book
{
private:
    string title;
    string author;
    double price;

public:

    Book(string title, string author, double price)
    {
        this->title = title;
        this->author = author;
        this->price = price;
    }
    Book(const Book &otherBook)
    {
        title =  otherBook.title;
        author = otherBook.author;
        price = otherBook.price;
    }
    void display()
    {
        cout << "Title : " << title;
        cout << "\nAuthor : " << author;
        cout << "\nPrice : " << price << "\n\n";
    }

    void setPrice(double p)
    {
        price = p;
    }
};

int main()
{
    Book user1("Life", "Hannan", 2700);
    Book user2 = user1;

    user2.setPrice(2500);

    cout << "Book 1\n";
    user1.display();

    cout << "\nBook 2 (Copy)\n";
    user2.display();

    return 0;
}