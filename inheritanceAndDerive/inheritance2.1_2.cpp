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
    B(int pa) : A(pa) {
        cout << "constructing B " << endl;
    }

    ~B() { cout << "destructing B " << endl; }
};

class C : public B {
public:
    C(int pa) : B(pa) {
        cout << "constructing C " << endl;
    }

    ~C() { cout << "destructing C " << endl; }
};

int main() {
    C c2(10);

    return 0;
}
