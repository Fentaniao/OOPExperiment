#include <iostream>

using namespace std;

class Teacher {
public:
    string name_;
    int age_;
    string sex_;
    string address_;
    string telephone_number_;
    string title_;
public:
    Teacher(string &name, int age, string &sex, string &address, string &telephone_number, string &title) {
        name_ = name;
        age_ = age;
        sex_ = sex;
        address_ = address;
        telephone_number_ = telephone_number;
        title_ = title;
    };

    void Display();
};

void Teacher::Display() {
    cout << "name: " << name_ << endl
         << "age: " << age_ << endl
         << "sex: " << sex_ << endl
         << "address: " << address_ << endl
         << "telephone number: " << telephone_number_ << endl;
}

class Cadre {
public:
    string name_;
    int age_;
    string sex_;
    string address_;
    string telephone_number_;
    string post_;
public:
    Cadre(string &name, int age, string &sex, string &address, string &telephone_number, string &post) {
        name_ = name;
        age_ = age;
        sex_ = sex;
        address_ = address;
        telephone_number_ = telephone_number;

    };

    void Display();
};

void Cadre::Display() {
    cout << "name: " << name_ << endl
         << "age: " << age_ << endl
         << "sex: " << sex_ << endl
         << "address: " << address_ << endl
         << "telephone number: " << telephone_number_ << endl;
}

class Teacher_Cadre : public Teacher, public Cadre {
public:
    float wages_;
public:
    Teacher_Cadre(string name, int age, string sex, string address, string telephone_number, string title,
                  string post, float wages) :
            Teacher(name, age, sex, address, telephone_number, title),
            Cadre(name, age, sex, address, telephone_number, post) {
        wages_ = wages;

    };

    void Show();
};

void Teacher_Cadre::Show() {
    Teacher::Display();
    cout << "post: " << post_ << endl
         << "wages: " << wages_ << endl;
}

int main() {
    Teacher_Cadre a = Teacher_Cadre("张三", 30, "男", "北京市朝阳区", "123456", "教授", "主任", 3000);
    a.Show();
    return 0;
}

