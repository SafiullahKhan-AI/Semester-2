#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) {
        balance = b;
    }
    virtual void calculateInterest() {
        cout << "===Calculating interest for generic account==" << endl;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(double b, double rate)
        : Account(b) {
        interestRate = rate;
    }

    void calculateInterest() override {
        double interest = balance * interestRate / 100;
        cout << "Savings Account Interest: " << interest << endl;
    }
};
class CurrentAccount : public Account {
private:
    double serviceCharge;

public:
    CurrentAccount(double b, double charge)
        : Account(b) {
        serviceCharge = charge;
    }

    void calculateInterest() override {
        double interest = balance * 0.01;
        double net = interest - serviceCharge;
        cout << "Current Account Interest: " << interest << endl << "Service Charge: " << serviceCharge << endl;
        cout << "Net Interest: " << net << endl;
    }
};

int main() {
    Account* acc;
    SavingsAccount sa(15000, 4.0);   
    CurrentAccount ca(10000, 50);
    cout << "----- Banking Interest System -----" << endl;
    acc = &sa;
    acc->calculateInterest();
    cout << "-------------------"<<endl;
    acc = &ca;
    acc->calculateInterest();
    return 0;
}