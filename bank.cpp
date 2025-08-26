#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    static int nextAccountNumber;
    static int totalAccounts;

public:
    BankAccount(double amount = 0) {
        accountNumber = nextAccountNumber++;
        balance = amount;
        totalAccounts++;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance.\n";
    }

    void show() {
        cout << "Account  ****" << accountNumber << " | Balance: Rs" << balance << endl;
    }

    static int getTotalAccounts() {
        return totalAccounts;
    }

    friend void transfer(BankAccount &a, BankAccount &b, double amount);
};

int BankAccount::nextAccountNumber = 100;
int BankAccount::totalAccounts = 0;

void transfer(BankAccount &from, BankAccount &to, double amount) {
    if (amount <= from.balance) {
        from.balance -= amount;
        to.balance += amount;
    } else {
        cout << "Transfer failed.\n";
    }
}

int main() {
    BankAccount a1(100);
    BankAccount a2(200);

    a1.deposit(50);
    a2.withdraw(30);

    transfer(a1, a2, 70);

    a1.show();
    a2.show();

    cout << "Total accounts: " << BankAccount::getTotalAccounts() << endl;

    return 0;
}
