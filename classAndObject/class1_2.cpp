#include  <iostream>

using namespace std;

class Student {
public:
    Student() {
        cout << "constructing student.\n";
    }

    ~Student() {
        cout << "destucting student.\n";
    }
};

class Teacher {
public:
    Teacher() {
        cout << "constructing teacher.\n";
    }

    ~Teacher() {
        cout << "destucting teacher.\n";
    }
};

class Tpair {
public:
    Tpair() {
        cout << "constructing tutorpair.\n";
    }

    ~Tpair() {
        cout << "destucting tutorpair.\n";
    }

protected:
    Student student;
    Teacher teacher;
};

int main() {
    Tpair tp;
    cout << "back in main.\n";
}
