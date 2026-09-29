#include <iostream>

using namespace std;

class BankAccount
{
private:
    string accountHolder;
    double balance;

public:
    void setBalance(double b)
    {
        if (b >= 0)
        {
            balance = b;
        }
    }

    double getBalance()
    {
        return balance;
    }

    void setName(string n)
    {
        accountHolder = n;
    }

    string getName()
    {
        return accountHolder;
    }

    double deposit(double d)
    {
        if (d > 0)
        {
            balance += d;
        }
        return balance;
    }

    double withdraw(double w)
    {
        if (balance >= w && w > 0)
        {
            balance -= w;
        }
        return balance;
    }
};

int main()
{
    BankAccount user1;

    user1.setName("Hannan");
    cout << "Account Holder : " << user1.getName();
    user1.setBalance(5000);
    cout << "\nInitial Balance : " << user1.getBalance();

    double deposit = 0;
    double withdraw = 0;

    cout << "\n\nDeposit : ";
    cin >> deposit;
    cout << "Withdraw : ";
    cin >> withdraw;

    user1.deposit(deposit);
    user1.withdraw(withdraw);

    cout << "\nFinal Balance : " << user1.getBalance();
    return 0;
}