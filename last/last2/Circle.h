#ifndef OOPEXPERIMENT_CIRCLE_H
#define OOPEXPERIMENT_CIRCLE_H

#include <iostream>

using namespace std;

class Circle : public Point //Circle是Point类的公用派生类
{
protected:
    float radius;
public:
    explicit Circle(float x = 0, float y = 0, float r = 0); //构造函数
    void setRadius(float); //设置半径值的函数
    float getRadius() const; //读取半径值的函数
    virtual float area() const; //计算圆面积的函数
    friend ostream &operator<<(ostream &, const Circle &); //重载运算符"<<"
};

#endif //OOPEXPERIMENT_CIRCLE_H
