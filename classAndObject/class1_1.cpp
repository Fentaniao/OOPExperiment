#include  <iostream>

using namespace std;

class simplecat {
public:
    simplecat(int age, int weight);            //构造函数
    ~simplecat();

    int GetAge() { return itsage; }

    int GetWeight() { return itsweight; }

private:
    int itsage, itsweight;                    //定义两个变量
};

simplecat::simplecat(int age, int weight)    //构造函数，对变量进行初始化
{
    cout << "调用构造函数" << endl;
    itsage = age;
    itsweight = weight;
}

simplecat::~simplecat() {
    cout << "调用析构函数" << endl;
}

int main() {
    //创建F对象
    simplecat F(5, 8);
    //输出age
    cout << "F age is: " << F.GetAge() << endl;
    //输出weight
    cout << "F weight is:" << F.GetWeight() << endl;

    return 0;
}
