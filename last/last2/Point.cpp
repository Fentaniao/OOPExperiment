#include "Point.h"

//下面定义Point类的成员函数
//定义Point类的构造函数
Point::Point(float a, float b) //对x，y初始化
{
    x = a;
    y = b;
}

void Point::setpoint(float a, float b) //对x，y赋以新值
{
    x = a;
    y = b;
}

//重载运算符<<，使之能输出点的坐标
ostream &operator<<(ostream &output, const Point &p) {
    output << "[" << p.x << "," << p.y << "]" << endl;
    return output;
}