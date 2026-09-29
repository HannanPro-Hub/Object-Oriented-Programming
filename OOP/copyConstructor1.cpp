#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    double salary;

public:

    Employee(string name, int id, double salary)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    Employee(const Employee &other)
    {
        name = other.name;
        id = other.id;
        salary = other.salary;
    }
    void display()
    {
        cout << "Name : " << name;
        cout << "\nId : " << id;
        cout << "\nSalary : " << salary << "\n\n";
    }
};

int main()
{
    Employee user1("Hannan", 701, 92000);
    Employee user2 = user1;

    cout << "Employee 1\n";
    user1.display();
    cout << "\nEmployee 2 (Copy)\n";
    user2.display();

    return 0;
}