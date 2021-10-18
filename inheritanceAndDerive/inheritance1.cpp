#include <iostream>

using namespace std;

class base {  //定义一个基类
    int x1, x2;
public:
    void assign(int p1, int p2)  //为私有数据赋值
    {
        x1 = p1;
        x2 = p2;
    }

    int inc1() { return ++x1; }

    int inc2() { return ++x2; }

    void dispaly()   //输出x1,x2的值
    {
        cout << "base x1=" << x1 << " x2=" << x2 << "\n";
    }
};

class derive1 : base {  //定义一个私有派生类
    int x3;
public:
    derive1(int p3) { x3 = p3; }  //构造函数
    void assign(int p1, int p2) { base::assign(p1, p2); }   //调用基类成员函数
    int inc1() { return base::inc1(); }

    int inc2() { return base::inc2(); }

    int inc3() { return ++x3; }   //求x3的值
    void display() { cout << "derive1 x3=" << x3 << "\n"; }
};

class derive2 : public base {  //E  定义一个公有派生类
    int x4;
public:
    derive2(int p4) { x4 = p4; }

    int inc1() {
        int temp = base::inc1();
        temp = base::inc1();
        temp = base::inc1();
        return base::inc1();
    }

    int inc4() { return ++x4; }

    void display() {
        base::dispaly();
        cout << "derive2 x4=" << x4 << "\n";
    }
};

int main() {
    base p;
    p.assign(-2, -2);   //A
    p.dispaly(); //显示成员函数

    derive1 d1(-4);  //B
    d1.assign(10, 10);
    d1.inc1();
    d1.display();

    derive2 d2(5);  //C
    d2.assign(-6, -6); //D
    d2.display();
    d2.inc1();
    d2.inc2();
    d2.display();
    d2.base::inc1();
    d2.display();

    return 0;
}
