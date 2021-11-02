#include <iostream>

using namespace std;

class Li {
public:
    virtual void say() {}
};

class Li_brother : public Li {
public:
    virtual void say()//此句， virtual可省略吗
    {
        cout << "I'm Li ming, I have 3 sports: boxing, fencing and wrestling." << endl;
    }

    void boxing() { cout << "boxing" << endl; }

    void fencing() { cout << "fencing" << endl; }

    void wrestling() { cout << "wrestling" << endl; }
};

class Li_sister : public Li {
public:
    virtual void say() {//此句， virtual可省略吗
        cout << "I'm Li xia, I have 2 sports: swim and skating." << endl;
    }

    void swim() { cout << "swim" << endl; }

    void skating() { cout << "skating" << endl; }
};

void Speak(Li *pL) { pL->say(); }

int main() {
    Li *p;       //基类指针，李家代表
    Li_brother b;
    Li_sister s;
    //p = &b; //基类指针，哥哥
    p = &s; //基类指针，妹妹
    Speak(p);
    return 0;
}
