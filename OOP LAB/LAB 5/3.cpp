#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl;
    }
};

class Student : public Person
{
protected:
    int studentID;
    string program;

public:
    Student(string n, int a, int id, string pro)
        : Person(n, a)
    {
        studentID = id;
        program = pro;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Student ID: " << studentID << endl
             << "Program: " << program << endl;
    }
};

class GraduateStudent : public Student
{
private:
    string researchTopic;
    string supervisorName;

public:
    GraduateStudent(string n, int a, int id, string prog,
                    string topic, string supervise)
        : Student(n, a, id, prog)
    {
        researchTopic = topic;
        supervisorName = supervise;
    }

    void displayGraduate()
    {
        displayStudent();
        cout << "Research Topic: " << researchTopic << endl
             << "Supervisor: " << supervisorName << endl;
    }
};
int main()
{
    GraduateStudent g1("Safi Khan", 24, 101, "Artificial Intelligence", "OOP Programming", "Talha Shahid");
    cout << "----- Graduate Student Profile -----" << endl;
    g1.displayGraduate();
    return 0;
}