#include <iostream>
using namespace std;

class Author{
    string name;
    int AuthorID;
public:
    Author(string a, int b){
        name = a;
        AuthorID = b;
    }
    void displayAuthor(){
        cout << "ID: " <<AuthorID<< " & Name: "<<name<<endl;
    }
};
class Book{

    string title;
    Author* authors[5];   
    int counter;          
public:
    Book(string t){
        title = t;
        counter = 0;
    }
    void addAuthor(Author* a){
        if (counter < 5){
            authors[counter] = a;
            counter++;
        }
        else{
            cout << "Author list is full!" << endl;
        }
    }

    void displayAuthors(){
        cout << "Book Title: "<< title<< endl;
        cout << "Authors: "<< endl;
        for (int i = 0; i < counter; i++){
            authors[i]->displayAuthor();
        }
    }
};

int main(){
    Author a1("Charles Dickens", 101);
    Author a2("William Golding", 102);
    Author a3("William Wordsworth", 103);
    Book b1("Lord of Flies");
    b1.addAuthor(&a1);
    b1.addAuthor(&a2);
    b1.addAuthor(&a3);
    b1.displayAuthors();
    return 0;
}