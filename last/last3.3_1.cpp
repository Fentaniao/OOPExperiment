//虚函数的使用3
#include < iostream >

using namespace std;

class a {
public:
    virtual void f() //C
    { cout << "class a\n"; }
};

class a1 : public a {
public:
    void f()//D
    { cout << "class a1\n"; }
};

class a2 : public a {
public:
    void f() { cout << "class a2\n"; }
};

class aa : public a1, public a2 {
public:
    void f() { cout << "class aa\n"; }
};


int main() {
    a1 *ptr1;  //定义a1类指针ptr1
    a2 *ptr2;  //定义a2类指针ptr2
    aa obj;    //定义aa类对象obj
    ptr1 = &obj;  //a1类指针ptr1指向aa类对象obj
    ptr1->f();  //调用aa类的f()
    ptr2 = &obj;  //a2类指针ptr2指向aa类对象obj
    ptr2->f();  //调用aa类的f()
    return 0;
}
