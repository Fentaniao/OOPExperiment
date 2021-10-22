#include <iostream>

using namespace std;

class A   //A为基类
{
public:
    void f1() {
        cout << "f1()" << endl;
    };

    int i;
protected:
    void f2() {
        cout << "f2()" << endl;
    };

    int j;
private:
    int k;
};

class B : public A        //B为A的公用派生类，如果改成protected会有什么变化
{
public:
    void f3() {
        cout << "f3()" << endl;
        f1();
        f2();

        cout << i << endl;
        cout << j << endl;
        //        cout << k << endl;

    };

protected:
    int m;
private:
    int n;
};

class C : public B              //C为B的公用派生类，如果改成protected会有什么变化
{
public:
    void f4() {
        cout << "f4()" << endl;
        f1();
        f2();
        f3();
    };

private:
    int p;
};

int main() {
    A a1;                        //a1是基类A的对象
    B b1;                         //b1是派生类B的对象
    C c1;                        //c1是派生类C的对象

    //    1
    //    cout<<b1.i<<endl;
    //    cout<<b1.j<<endl;
    //    cout<<b1.k<<endl;

    //  2, 3
    b1.f3();

    //    4
    cout << c1.i << endl;
    //    cout << c1.j << endl;
    //    cout << c1.k << endl;
    //    cout << c1.m << endl;
    //    cout << c1.n << endl;
    //    cout << c1.p << endl;

    //    5
    c1.f1();
    //    c1.f2();
    c1.f3();
    c1.f4();

    //    6
    c1.f4();

    return 0;
}
