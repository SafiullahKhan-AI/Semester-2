#include <iostream>
using namespace std;

class University{
private:
    static int totalStudents;
    string universityName;

public:
    University(){
        totalStudents++;
        universityName = "Fast University";
    }
    University(string a){
        universityName = a;
        totalStudents++;
    }

    static int getTotalStudents(){
        return totalStudents;
    }

    void displayInfo(){
        cout<<"University Name: "<<universityName<< " & Total Students: " <<totalStudents<<endl;
    }
};
int University::totalStudents = 0;

int main() {
    University u1,u2;
    University u3("Bahria University");
    cout<< "Total Students: "<<University::getTotalStudents() <<endl;
    u1.displayInfo();
    u2.displayInfo();
    u3.displayInfo();
}