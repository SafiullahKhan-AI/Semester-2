#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int size;
    int* grades;

public:
    Student(string n, int s) {
        name = n;
        size = s;
        grades = new int[size];
        for (int i = 0; i < size; i++) {
            cin>>grades[i];
        }
    }
    Student(const Student& s) {
        name = s.name;
        size = s.size;
        grades = new int[size];
        for (int i = 0; i<size; i++) {
            grades[i] = s.grades[i];
        }
    }
    void modify(int index, int value) {
        if (index >= 0 && index < size)
            grades[index] = value;
    }

    void show() {
        cout << name << ": ";
        for (int i = 0; i < size; i++) {
            cout << grades[i] << " ";
        }
        cout << endl;
    }

    ~Student() {
        delete[] grades;
    }
};

int main() {
    string name;
    int n;
    cin >> name;
    cin >> n;
    Student s1(name, n);
    Student s2 = s1;
    int index, value;
    cin >> index >> value;
    s1.modify(index, value);
    s1.show();
    s2.show();
    return 0;
}