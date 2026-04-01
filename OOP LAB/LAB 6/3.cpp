#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "===Calculating Employee Salary==" << endl;
    }
    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    double baseSalary;
    double bonus;

public:
    Manager(double b, double bo) {
        baseSalary = b;
        bonus = bo;
    }

    void calculateSalary() override {
        double total = baseSalary + bonus;
        cout << "Manager Salary: " << total << endl;
    }
};

class Developer : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Developer(double rate, int hours) {
        hourlyRate = rate;
        hoursWorked = hours;
    }

    void calculateSalary() override {
        double total = hourlyRate * hoursWorked;
        cout << "Developer Salary: " << total << endl;
    }
};

int main() {
    Employee* emp;  
    Manager m(20000, 5000);
    Developer d(180, 120);
    emp = &m; 
    emp->calculateSalary();   
    emp = &d; 
    emp->calculateSalary();   
    return 0;
}