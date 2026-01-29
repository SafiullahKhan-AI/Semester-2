#include <iostream>
using namespace std;

struct EmployeeStruct{
    int id;
    float salary;
};
class EmployeeClass{
private:
    int id;
    float salary;

public:
    void setId(int i){
        id = i;
    }
    void setSalary(float s){
        salary = s;
    }
    int getId(){
        return id;
    }
    float getSalary(){
        return salary;
    }
};

int main(){
    EmployeeStruct e1;
    e1.id = 1;
    e1.salary = 40000;
    cout << e1.id << endl;
    cout << e1.salary << endl;
    EmployeeClass e2;
    e2.setId(2);
    e2.setSalary(60000);
    cout << e2.getId() << endl;
    cout << e2.getSalary() << endl;
    return 0;
}

