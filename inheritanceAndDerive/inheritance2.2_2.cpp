#include <iostream>

using namespace std;

class person {  //定义基类
    char *name;  //姓名
    int age;  //年龄
    char *add;  //住址
public:
    person()  //构造函数
    { cout << "the constructor of class person!\n"; }

    ~person()  //析构函数
    { cout << "the destructor of class person!\n"; }
};

class student : public person {  //定义派生类student
    char *department;  //所在系
    int level;   //年级
public:
    student()  //构造函数
    { cout << "the constructor of class student!\n"; }

    ~student()  //析构函数
    { cout << "the destructor of class student!\n"; }
};

class teacher : public person {  //定义派生类teacher
    char *major;  //专业
    float salary;  //工资
public:
    teacher()  //构造函数
    { cout << "the constructor of class teacher!\n"; }

    ~teacher()  //析构函数
    { cout << "the destructor of class teacher! \n"; }
};

int main() {
    student d1("zhangsan”,20,”fuzhoudaxuecheng”,”ruanjiangongchengxi”,2018);
    teacher d2("lisi”,45,”fuzhoudaxuecheng”,”ruanjiangongcheng”,8008);

    return 0;
}
