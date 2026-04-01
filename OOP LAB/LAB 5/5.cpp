#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n , int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl<< "Age: " << age << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;

public:
    Teacher(string n, int a, string sub)
        : Person(n, a) {
        subject = sub;
    }

    void displayTeacher() {
        cout << "Subject: " << subject << endl;
    }
};

class Student : virtual public Person {
protected:
    int studentID;

public:
    Student(string n, int a, int id)
        : Person(n, a) {
        studentID = id;
    }

    void displayStudent() {
        cout << "Student ID: " << studentID << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    TeachingAssistant(string n, int a, string sub, int id)
        : Person(n, a),  
          Teacher(n, a, sub),
          Student(n, a, id) {}

    void displayTAinfo() {
        displayPerson(); 
        displayTeacher();
        displayStudent();
    }
};

int main() {
    TeachingAssistant ta("Safi Khan", 19, "OOP Programming", 101);
    ta.displayTAinfo();
    return 0;
}