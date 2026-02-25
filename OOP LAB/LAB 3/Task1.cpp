#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    Book() {
        title = "XXX";
        author = "YYY";
        price = 50.00;
    }
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b1;
    Book b2("Power", "Henry", 100.50);
    cout << "Book 1 Details:" << endl;
    b1.display();
    cout << "Book 2 Details:" << endl;
    b2.display();
    return 0;
}