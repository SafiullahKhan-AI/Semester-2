#include <iostream>
using namespace std;

class Student{
private:
    static int counter; 
    int studentID;
    string name;
    int marks[5];

public:
    Student(){
        counter++;
        studentID = counter;
    }

    void input(){
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++){
            cin >> marks[i];
        }
    }
    float getAverage(){
        int sum = 0;
        for (int i = 0; i < 5; i++){
            sum += marks[i];
        }
        return sum / 5.0;
    }
    void display(){
        cout<<"ID: "<<studentID<<endl<<"Name: " <<name<< endl<< "Average: "<<getAverage()<<endl<<endl;
    }
    float getAvg(){
        return getAverage();
    }
};
int Student::counter = 0;

int main(){
    int n = 2;
    Student s[n];
    for (int i = 0; i < n; i++){
        cout << "Enter Deatails of Student " <<i + 1<< endl;
        s[i].input();
    }
    cout << "--- Student Details ---"<<endl;
    for (int i = 0; i < n; i++){
        s[i].display();
    }
    int high = 0;
    float highAvg = s[0].getAvg();

    for (int i = 1; i < n; i++){
        if (s[i].getAvg() > highAvg){
            highAvg = s[i].getAvg();
            high = i;
        }
    }
    cout << "---Top Student---"<<endl;
    s[high].display();
}