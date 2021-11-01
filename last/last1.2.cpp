//虚函数的定义
#include <iostream>

using namespace std;

class base {
public:
    void fn() { cout << "In base class\n"; }
    //virtual void fn() { cout << "In base class\n"; }
};

class subclass : public base {
public:
    //void fn() { cout << "In subclass\n"; }
    virtual void fn() { cout << "In subclass\n"; }
};

void test(base &b) {
    b.fn();
}





































int main() {
    base bc;
    subclass sc;

    test(bc);
    test(sc);

    return 0;
}
