#include <iostream>
using namespace std;

class Employee
{
private:
    int empID;
    string name;
    long salary;
public:
    void setEmployeeData(int a, string n, long s){
        empID = a;
        name = n;
        salary = s;
    };
    void displayEmployeeData(){
        cout << " ID: " << empID << endl << " Name: "<< name << endl << " Salary: "<< salary << endl;
    }
};

class Manager : public Employee{
private:
    string department;
    int bonus;
public:
   void setManagerData(int id, string name, long salary, string dept, int b){
        setEmployeeData(id, name, salary);
        department = dept;
        bonus = b;
    }
    void displayManagerData(){
        cout << "===Manager Data==" << endl;
        displayEmployeeData();
        cout << " Dept: " << department << endl << " Bonus: "<< bonus << endl;
    }
};
int main(){
    Manager m1;
    m1.setManagerData(101,"Safi Khan",25000,"Sales Dept", 1500);
    m1.displayManagerData();
}

