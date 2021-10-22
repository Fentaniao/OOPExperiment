#include <iostream>

using namespace std;

class data {
    int x;
public:
    data(int x) {
        data::x = x;  //基类构造函数
        cout << "class data\n";
    }
};

class a {  //定义a类
    data d1;  //d1为data类对象，作为a类的成员对象
public:
    a(int x) : d1(x)  //定义构造函数，缀上成员对象的构造函数
    { cout << "class a\n"; }
};

class b : public a {  //定义b类，为a类的派生类
    data d2;  //d2为data类对象，作为b类的成员对象
public:
    b(int x) : a(x), d2(x)  //定义构造函数，缀上基类和成员对象的构造函数
    { cout << "class b\n"; }
};

class c : public b {  //定义c类，为b类的派生类
    //d3
public:
    c(int x) : b(x)  //定义构造函数缀上基类b的构造函数
    { cout << "class c\n"; }
};

int main() {
    c object(5);

    return 0;
}
