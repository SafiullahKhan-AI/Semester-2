#include <iostream>
using namespace std;

class Shape {
public:
    void area(int radius) {
        double result = 3.14 * radius * radius;
        cout << "Area of Circle: " << result << endl;
    }

    void area(double length, double width) {
        double result = length * width;
        cout << "Area of Rectangle: " << result << endl;
    }

    void area(float base, float height, char t) {
        double result = 0.5 * base * height;
        cout << "Area of Triangle: " << result << endl;
    }
};

int main() {
    Shape s;
    s.area(2);          
    s.area(4, 7);      
    s.area(2.0f, 4.0f , 't'); 
    return 0;
}