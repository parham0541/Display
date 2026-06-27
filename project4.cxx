#include <iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    float balance;

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        balance = balance - amount;
    }

    void showBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    acc.accountNumber = 123456;
    acc.balance = 1000;

    acc.deposit(500);
    acc.withdraw(200);

    acc.showBalance();

    return 0;
}