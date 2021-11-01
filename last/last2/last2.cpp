#include "Point.cpp"
#include "Circle.cpp"
#include "Cylinder.cpp"

int main() {


    cout << "<< Point" << endl;
    Point p(3.5, 6.4); //建立Point类对象p，对x，y初始化
    cout << "x=" << p.getx() << ",y=" << p.gety() << endl; //输出p的坐标值x，y
    p.setpoint(8.5, 6.8); //重新设置p的坐标值
    cout << "p(new):" << p << endl; //用重载运算符<<输出p点坐标


    cout << "<< Circle" << endl;
    Circle c(3.5, 6.4, 5.2); //建立Circle类对象c并指定圆心坐标和半径
    cout << "original circle:\nx=" << c.getx() << ",y=" << c.gety() << ",r="
         << c.getRadius() << ",area=" << c.area() << endl; //输出圆心坐标、半径和面积
    c.setRadius(7.5); //设置半径值
    c.setpoint(5, 5); //设置圆心坐标值x,y
    cout << "new circle:\n:" << c; //用重载运算符<<输出圆对象的信息
    Point &pRef = c; //pRef是Point类的引用，被c初始化
    cout << "pRef:" << pRef; //输出pRef的信息


    cout << "<< Cylinder" << endl;
    Cylinder cy1(3.5, 6.4, 5.2, 10); //建立Cylinder类对象cy1,并初始化
    cout << "original Cylinder:\nx=" << cy1.getx() << ",y=" << cy1.gety() << ",r="
         << cy1.getRadius() << ",h=" << cy1.getHeight() << "\narea=" << cy1.area()
         << ",volume=" << cy1.volume() << endl; //用系统定义的运算符"<<"输出圆柱cy1的数据
    cy1.setHeight(15); //设置圆柱高
    cy1.setRadius(7.5); //设置圆半径
    cy1.setpoint(5, 5); //设置圆心坐标值x,y
    cout << "\nnew Cylinder:\n:" << cy1; //用重载运算符"<<"输出cy1的数据
    pRef = cy1; //pRef是Point类对象的引用
    cout << "pRef as a point:" << pRef; //pRef作为一个点输出
    Circle &cRef = cy1; //cRef是Circle类对象的引用
    cout << "\ncRef as a circle:" << cRef; //cRef作为一个"圆"输出


    return 0;
}