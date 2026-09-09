#include <iostream>
using namespace std;
class BankAccount {
public:
    int accountNumber;
    double balance;
    void transfer(BankAccount &receiver, double amount) {
        if (balance >= amount) {
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;
            cout << "Transfer successful!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    BankAccount a1, a2;
    a1.accountNumber = 101;
    a1.balance = 5000;
    a2.accountNumber = 102;
    a2.balance = 2000;
    a1.transfer(a2, 1000);
    cout << "Account 1 Balance: " << a1.balance << endl;
    cout << "Account 2 Balance: " << a2.balance << endl;
    return 0;
}