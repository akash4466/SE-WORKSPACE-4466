#include <iostream>
using namespace std;

class Person {
public:
    void show(){ cout << "I am a person" << endl; }
};

class Student : public Person {
};

class Teacher : public Person {
};

int main() {
    Student s;
    Teacher t;
    s.show();
    t.show();
    return 0;
}
