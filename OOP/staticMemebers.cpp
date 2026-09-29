#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    static int employeeCount;

public:
    Employee(string name, int id)
    {
        this->name = name;
        this->id = id;
        employeeCount++;
    }

    void display()
    {
        cout << "Name : " << name;
        cout << "\nId : " << id << "\n\n";
    }

    static void showEmployeeCount()
    {
        cout << "Total Numbers Of Employees : " << employeeCount << "\n\n";
    }
};

int Employee::employeeCount = 0;

int main()
{
    Employee e1("Hannan", 101);
    e1.display();

    Employee e2("Laiba", 102);
    e2.display();

    Employee e3("Hussnain", 103);
    e3.display();

    Employee::showEmployeeCount();

    Employee e4("Sara", 104);
    e4.display();

    Employee::showEmployeeCount();
    
    return 0;
}