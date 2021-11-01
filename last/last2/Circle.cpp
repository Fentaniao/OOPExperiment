#include "Point.h"
#include "Circle.h"

//定义Circle类的构造函数，对圆心坐标和半径初始化
Circle::Circle(float a, float b, float r) : Point(a, b), radius(r) {}

//定义设置半径值的函数
void Circle::setRadius(float r) { radius = r; }

//定义读取半径的函数
float Circle::getRadius() const { return radius; }

// 定义计算圆面积的函数
float Circle::area() const { return 3.14159 * radius * radius; }

// 重载运算符<<,使之按规定的形式输出圆的信息
ostream &operator<<(ostream &output, const Circle &c) {
    output << "Center=[" << c.x << "," << c.y << "],r=" << c.radius << ",area=" << c.area() << endl;
    return output;
}