#include <iostream>
using namespace std;

class Student{
private:
    int rollNumber;
    float cgpa;

public:
    void setData(int r, float c){
        rollNumber = r;
        cgpa = c;
    }
    void displayData(){
        cout<<rollNumber<<endl;
        cout<<cgpa<<endl;
    }
};

int main(){
    Student s;
    s.setData(101, 3.5);
    s.displayData();
    s.rollNumber = 102;
    return 0;
}

