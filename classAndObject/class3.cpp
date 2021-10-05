//创建一个线性方程，支持显示该方程的数学形式和计算它的根。

#include <iostream>

using namespace std;

//取符号函数
//输入double型的变量x，返回char型的符号
//若x>=0.则输出正号，若x<0，则输出负号
char sgn(double x) {
    if (x >= 0)
        return ('+');
    else
        return ('-');
}

//绝对值函数
//输入double型的变量x，返回double型的变量
//若x>=0.则输出x，若x<0，则输出-x
double abs_fun(double x) {
    if (x >= 0)
        return (x);
    else
        return (-x);
}

class CLinearEquation {
private:
    double a, b;
public:
    CLinearEquation(double a1, double b1);

    void disp_Equation();

    void disp_Root();
};

//CLinearEquation类的构造函数
//输入double型的变量a1和b1，返回构造的CLinearEquation对象
CLinearEquation::CLinearEquation(double a1, double b1) {
    a = a1;
    b = b1;
}

//输出方程的数学形式
//在控制台输出方程的数学形式
void CLinearEquation::disp_Equation() {
    cout << "线性方程:" << a << "X" << sgn(b) << abs_fun(b) << "=0 " << endl;
}

//输出方程的根
//在控制台输出方程的根
void CLinearEquation::disp_Root() {
    cout << "线性方程的根:" << "Root=" << -b / a << endl;
};

int main() {
    CLinearEquation e1(2, -4);
    e1.disp_Equation();
    e1.disp_Root();

    return 0;
}
