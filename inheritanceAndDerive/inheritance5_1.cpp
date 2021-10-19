#include <iostream>

using namespace std;

class base1 {
public:
    base1() { cout << "this is base class! \n"; }
};

class base2 {
public:
    base2() { cout << "this is base2 class! \n"; }
};

class level1 : public base2, virtual public base1 {  //A
public:
    level1() { cout << "this is level1 class! \n"; }
};

class level2 : public base2, virtual public base1 {  //B
public:
    level2() { cout << "this is level2 class! \n"; }
};

class toplevel : public level1, virtual public level2 {  //C
public:
    toplevel() {
        cout << "this is toplevel class! \";}
    };

    int main() {
        toplevel topobj;
        return 0;
    };
