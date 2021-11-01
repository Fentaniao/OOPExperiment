#include "Point.h"
#include "Circle.h"
#include "Cylinder.h"

//定义构造函数
Cylinder::Cylinder(float a, float b, float r, float h) : Circle(a, b, r), height(h) {}

//定义设置圆柱高的函数
void Cylinder::setHeight(float h) { height = h; }

//定义读取圆柱高的函数
float Cylinder::getHeight() const { return height; }

//定义计算圆表面积的函数
float Cylinder::area() const { return 2 * Circle::area() + 2 * 3.14159 * radius * height; }

// 定义计算圆柱体积的函数
float Cylinder::volume() const { return Circle::area() * height; }

// 重载运算符"<<"的函数
ostream &operator<<(ostream &output, const Cylinder &cy) {
    output << "Center=[" << cy.x << "," << cy.y << "],r=" << cy.radius << ",h="
           << cy.height << "\narea=" << cy.area() << ",volume=" << cy.volume() << endl;
    return output;
}