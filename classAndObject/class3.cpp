#include <iostream>

using namespace std;

char sgn(double x) {
    if (x >= 0)
        return ('+');
    else
        return ('-');
}

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

CLinearEquation::CLinearEquation(double a1, double b1) {
    a = a1;
    b = b1;
}

void CLinearEquation::disp_Equation() {
    cout << "线性方程:" << a << "X" << sgn(b) << abs_fun(b) << "=0 " << endl;
}

void CLinearEquation::disp_Root() {
    cout << "线性方程的根:" << "Root=" << -b / a << endl;
};

int main() {
    CLinearEquation e1(2, -4);
    e1.disp_Equation();
    e1.disp_Root();

    return 0;
}
