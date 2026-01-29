#include <iostream>
using namespace std;

class BankAccount{
private:
    int balance;

public:
    BankAccount();
    void deposit(int amount);
    void withdraw(int amount);
    void showBalance();
};
BankAccount::BankAccount(){
    balance = 0;
}

void BankAccount::deposit(int amount){
    balance = balance + amount;
}

void BankAccount::withdraw(int amount){
    if (amount <= balance)
        balance = balance - amount;
}
void BankAccount::showBalance(){
    cout<<balance;
}

int main(){
    BankAccount b;
    b.deposit(1000);
    b.withdraw(300);
    b.showBalance();
    return 0;
}

