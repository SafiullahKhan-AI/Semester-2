#include <iostream>
using namespace std;

class Book{
    const string ISBN;  
    string title;       

public:
    Book(string isbn, string t) : ISBN(isbn){
        title = t;
    }
    void displayDetails() const{
        cout << "ISBN: " << ISBN << " & Title: " << title << endl;
    }
    void updateTitle(string newTitle){
        title = newTitle;
    }
};

int main(){
    Book b1("001", "Basic Maths");
    b1.displayDetails();

    b1.updateTitle("Calculus");
    b1.displayDetails();
    const Book b2("002", "Multivariable Calculus");
    b2.displayDetails();
    
    //b2.updateTitle("Algebra");
    //ISBN = "003"; 
    // Both Give Error
}