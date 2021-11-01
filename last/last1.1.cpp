//虚函数的定义
#include <iostream>

using namespace std;

class base {
public:
    void who() //A
    //virtual void who() //A
    { cout << "base\n"; }
};

class first : public base {
public:
    void who() { cout << "the first derivation\n"; }
};

class second : public base {
public:
    void who() { cout << "the second derivation\n"; }
};

int main() {
    base obj1, *ptr;
    first obj2;
    second obj3;
    ptr = &obj1;
    ptr->who();    //调用base类的who()
    ptr = &obj2;
    ptr->who();    //调用first类的who()
    ptr = &obj3;
    ptr->who();    //调用second类的who()

    return 0;
}
