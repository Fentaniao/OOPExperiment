//虚函数的使用2
#include <iostream>

using namespace std;

class figure {      //定义一个公共的基类
protected:
    int x, y;
public:
    figure(int x, int y) {
        figure::x = x;
        figure::y = y;
    }

    //virtual void show_area()      //B定义一个界面接口
    //{
    //    cout << "no area for this claaa\n";
    //}
    virtual void show_area() = 0;    //B定义一个界面接口
};

class Triangle : public figure {   //定义三角形类，基类成员x为底边长，y为三角形的高
public:
    Triangle(int x, int y) : figure(x, y) {};

    void show_area()   //三角形类的虚函数版本
    { cout << "the area of this Triangle is:" << x * y * 0.5 << "\n"; }
};

class Square : public figure {    //定义正方形类，基类的数据成员为正方形的边长
public:
    Square(int x) : figure(x, x) {};

    void show_area()     //正方形类的虚函数版本
    { cout << "the area of this Square is:" << x * x << "\n"; }
};


class Circle : public figure {    //定义圆类，基类的数据成员为圆的半径
public:
    Circle(int x) : figure(x, x) {};

    void show_area() { cout << "the area of this circle is:" << x * x * 3.1416 << "\n"; }
};

int main() {
    figure *ptr;       //定义基类指针ptr

    Triangle trian(10, 20);    //定义三角形类对象
    Square squa(30);     //定义正方形类对象
    Circle circ(40);     //定义圆类对象

    ptr = &trian;       //指针ptr指向三角形类对象
    ptr->show_area();

    ptr = &squa;      //指针ptr指向正方形类对象
    ptr->show_area();

    ptr = &circ;     //指针ptr指向圆类对象
    ptr->show_area();

    return 0;
}

