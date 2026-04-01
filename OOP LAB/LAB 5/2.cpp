#include <iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    void setPerson(string n , int a){
        name = n;
        age = a;
    }
    void displayPerson(){
        cout << " Name: " << name << endl << " Age: " << age <<  " yrs"<< endl;
    }
};

class PersonPublic : public Person{   
    void show(){
        // Accessible 
        displayPerson();
    } 
};
class PersonPrivate : private Person{  
    void show(){
        // Only Accessible inside class not in main
        displayPerson();
    }  
};
class PersonProtected : protected Person{
    void show(){
        // Only Accessible inside class not in main
        displayPerson();
    }
};
int main(){
    PersonPublic p1;
    p1.setPerson("Safi", 19);
    p1.displayPerson();
    PersonPrivate s2;
    //s2.setPerson("Khan", 20);   Protected and Private Derived Class cannot be accessable 
    //s2.show();
    PersonProtected s3;
    // s3.setData("Hamza", 21);
    // s3.show()      cannot be accesible
    
}
    

