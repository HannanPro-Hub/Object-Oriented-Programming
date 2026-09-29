#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    double marks;
    char grade;

public:
    Student(string n, int r, double m, char g)
    {
        name = n;
        rollNo = r;
        marks = m;
        grade = g;
    }

    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }

    void setrollNo(int r)
    {
        rollNo = r;
    }

    int getrollNo()
    {
        return rollNo;
    }

    void setMarks(double m)
    {
        if (m >= 0 && m <= 100)
        {
            marks = m;

            if (marks >= 90 && marks <= 100)
            {
                grade = 'A';
            }
            else if (marks >= 80 && marks < 90)
            {
                grade = 'B';
            }
            else if (marks >= 70 && marks < 80)
            {
                grade = 'C';
            }
            else if (marks >= 60 && marks < 70)
            {
                grade = 'D';
            }
            else
            {
                grade = 'F';
            }
        }
        else
        {
            cout << "\nInvalid Marks Entered! Must Be Between 0 And 100." << endl;
        }
    }
    double getMarks()
    {
        return marks;
    }

    void display()
    {
        cout << "Name : " << name;
        cout << "\nRoll No : " << rollNo;
        cout << "\nMarks : " << marks;
        cout << "\nGrade : " << grade << "\n\n" ;
    }
};

int main()
{
    Student st1("Hannan", 701, 92, 'A');

    st1.display();

    st1.setMarks(50);
    st1.display();
    return 0;
}