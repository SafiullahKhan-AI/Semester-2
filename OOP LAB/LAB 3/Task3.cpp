#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    string model;
    int year;
    float mileage;

public:
    Car(string model, int year, float mileage){
        this->model = model;
        this->year = year;
        this->mileage = mileage;
    }

    void updateMileage(float mileage){
        this->mileage = mileage;
    }

    void display() {
        cout << this->model << " " << this->year << " " << this->mileage << endl;
    }
};

int main() {
    Car c("Toyota", 2024, 10000);
    c.display();
    c.updateMileage(18500);
    c.display();
    return 0;
}