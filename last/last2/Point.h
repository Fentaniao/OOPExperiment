#ifndef OOPEXPERIMENT_POINT_H
#define OOPEXPERIMENT_POINT_H


#include <iostream>

using namespace std;

//声明类Point
class Point {
protected:
    float x, y;
public:
    Point(float a, float b);

    void setpoint(float, float); // 设置坐标值
    float getx() const { return x; } //读x坐标，getx为常成员函数
    float gety() const { return y; } //读y坐标，gety为常成员函数
    friend ostream &operator<<(ostream &, const Point &); //友元重载运算符"<<"
};


#endif //OOPEXPERIMENT_POINT_H
