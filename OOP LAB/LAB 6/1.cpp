#include <iostream>
using namespace std;

class PaymentSystem {
public:
    void pay(double amount) {
        cout << "Payment Method: Cash" << endl;
        cout << "Amount Paid: " << amount << endl;
    }
    void pay(double amount, string cardNumber) {
        cout << "Payment Method: Card" << endl;
        cout << "Amount Paid: " << amount << endl;
        cout << "Card Number: " << cardNumber << endl;
    }
    void pay(double amount, string bankName, string transactionID) {
        cout << "Payment Method: Online Transfer" << endl;
        cout << "Amount Paid: " << amount << endl;
        cout << "Bank: " << bankName << endl;
        cout << "Transaction ID: " << transactionID << endl;
    }
};
int main() {
    PaymentSystem p;
    p.pay(5000);

    cout <<"----------" <<endl;
    p.pay(2500, "1111-0000-1054-9999");

    cout <<"----------" << endl;
    p.pay(10000, "HBL", "ABC123456");
    return 0;
}