#include <iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    double balance;

    void transfer(BankAccount &receiver, double amount)
    {
        if (balance >= amount)
        {
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }
};

int main()
{
    BankAccount a1, a2;
    double amount;

    cout << "Enter Account 1 Number: ";
    cin >> a1.accountNumber;

    cout << "Enter Account 1 Balance: ";
    cin >> a1.balance;

    cout << "Enter Account 2 Number: ";
    cin >> a2.accountNumber;

    cout << "Enter Account 2 Balance: ";
    cin >> a2.balance;

    cout << "Enter Amount to Transfer: ";
    cin >> amount;

    a1.transfer(a2, amount);

    cout << "Account 1 Balance: " << a1.balance << endl;
    cout << "Account 2 Balance: " << a2.balance << endl;

    return 0;
}
  