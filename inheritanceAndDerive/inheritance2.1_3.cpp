//构造函数和析构函数
#include <iostream>

using namespace std;

class A {
private:
    int a;
public:
    A(int pa) {
        a = pa;
        cout << "constructing A " << endl;
    }

    ~A() { cout << "destructing A " << endl; }
};

class B : public A {
private:
    int b;
public:
    B(int pa, int pb) : A(pa) {
        b = pb;
        cout << "constructing B " << endl;
    }

    ~B() { cout << "destructing B " << endl; }
};

class C : public B {
private:
    int c;
public:
    C(int pa, int pb, int pc) : B(pa, pb) {
        c = pc;
        cout << "constructing C " << endl;
    }

    ~C() { cout << "destructing C " << endl; }
};

int main() {
    C c1(10, 20, 30);

    return 0;
}
