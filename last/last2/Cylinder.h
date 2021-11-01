#ifndef OOPEXPERIMENT_CYLINDER_H
#define OOPEXPERIMENT_CYLINDER_H

#include <iostream>

using namespace std;

class Cylinder : public Circle {
    //计算圆柱体积的函数
    friend ostream &operator<<(ostream &, const Cylinder &); //重载运算符"<<"
public:
    explicit Cylinder(float x = 0, float y = 0, float r = 0, float h = 0);

    float getHeight() const;

    //读取圆柱高的函数
    float area() const;

    //构造函数
    void setHeight(float);

    //设置圆柱高的函数
    //计算圆表面积的函数
    float volume() const;

protected:
    float height; //圆柱高
};

#endif //OOPEXPERIMENT_CYLINDER_H
