#include <iostream>
using namespace std;

class Processor{
    string model;
    double speed;
public:
    Processor(string m, double s){
        model = m;
        speed = s;
    }
    void display(){
        cout<<"Processor Model: "<< model<< endl << "Speed(GHz): "<<speed<<" GHz"<<endl;
    }
};

class RAM{
    int size;
    string type;
public:
    RAM(int s, string t){
        size = s;
        type = t;
    }
    void display(){
        cout<<"RAM Size: "<<size<<" GB" <<endl << "RAM Type: "<<type<<endl;
    }
};
class Computer{
    Processor p;   
    RAM r;    
public:
    Computer(string model,double speed,int size,string type)
        : p(model, speed), r(size, type){
    }
    void displaySpecs(){
        cout <<"---Computer Specs---"<<endl;
        p.display();
        r.display();
    }
};
int main(){
    Computer c1("Intel i7 10th Gen", 4.20, 20, "DDR5");
    c1.displaySpecs();
}