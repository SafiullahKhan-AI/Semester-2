#include <iostream>
using namespace std;

class Rectangle{
private:
    double length;
    double width;
    const float area;

public:
    Rectangle(double length, double width): length(length), width(width), area(length * width){}

    void setLength(double length){
        this->length = length;
    }
    void setWidth(double width){
        this->width = width;
    }
    void show(){
        cout << "length " <<this->length << " width " << this->width << " area " << this->area << endl;
    }
};

int main() {
    Rectangle r(6, 3);
    r.show();
    r.setLength(10);
    r.setWidth(5);
    r.show();
    return 0;
}