#include <iostream>
#include <utility>

using namespace std;

class person {  //定义基类
    string name;  //姓名
    int age;  //年龄
    string add;  //住址
public:
    person(string Pname, int Page, string Padd) {
        name = move(Pname);
        age = Page;
        add = move(Padd);

        cout << "the constructor of class person!\n";
    } //构造函数

    ~person()  //析构函数
    { cout << "the destructor of class person!\n"; }
};

class student : public person {  //定义派生类student
    string department;  //所在系
    int level;   //年级
public:
    student(string Pname, int Page, string Padd, string Pdepartment, int Plevel) : person(move(Pname), Page,
                                                                                          move(Padd)) {
        department = move(Pdepartment);
        level = Plevel;

        cout << "the constructor of class student!\n";
    }

    ~student()  //析构函数
    { cout << "the destructor of class student!\n"; }

};

class teacher : public person {  //定义派生类teacher
    string major;  //专业
    float salary;  //工资
public:
    teacher(string Pname, int Page, string Padd, string Pmajor, float Psalary) : person(move(Pname), Page, move(Padd)) {
        major = move(Pmajor);
        salary = Psalary;

        cout << "the constructor of class teacher!\n";
    }//构造函数

    ~teacher()  //析构函数
    { cout << "the destructor of class teacher! \n"; }
};

class graduate : public student {  //定义派生类teacher
    string birthday;  //生日
public:
    graduate(string Pname, int Page, string Padd, string Pdepartment, int Plevel, string Pbirthday)
            : student(move(Pname), Page, move(Padd), move(Pdepartment), Plevel) {
        birthday = move(Pbirthday);

        cout << "the constructor of class graduate!\n";
    }//构造函数

    ~graduate()  //析构函数
    { cout << "the destructor of class graduate! \n"; }
};

int main() {
    student d1("zhangsan", 20, "fuzhoudaxuecheng", "ruanjiangongchengxi", 2018);
    teacher d2("lisi", 45, "fuzhoudaxuecheng", "ruanjiangongcheng", 8008);
    graduate grad1("zhangsan", 20, "fuzhoudaxuecheng", "ruanjiangongchengxi", 2016, "19980304");

    return 0;
}
