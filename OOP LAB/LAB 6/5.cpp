#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() {
        cout << "===Starting vehicle engine===" << endl;
    }

    virtual ~Vehicle() {}
};
class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine starts with a keys" << endl;
    }
};
class Bike : public Vehicle {
public:
    void startEngine() override {
        cout << "Bike engine starts with a self/kick start" << endl;
    }
};
class Truck : public Vehicle {
public:
    void startEngine() override {
        cout << "Truck engine starts with heavy igniton" << endl;
    }
};

int main() {
    Vehicle* v;
    Car c;
    Bike b;
    Truck t;
    cout << "-----Vehicle Simulation-----" << endl;
    v = &c;
    v->startEngine();
    v = &b;
    v->startEngine();
    v = &t;
    v->startEngine();
    return 0;
}