#include <iostream>

using namespace std;

class Shape {      //定义一个公共的基类
protected:
    int x, y;
public:
    Shape(int x, int y) {
        Shape::x = x;
        Shape::y = y;
    }

    virtual double calculate_area() { return 0; }

    virtual void show_area() {
        cout << "no area for this claaa\n";
    }

};

class Circle : public Shape {
public:
    Circle(int x) : Shape(x, x) {};
    double area = x * x * 3.1416;

    double calculate_area() { return area; }

    void show_area() { cout << "the area of this circle is:" << area << "\n"; }
};

class Square : public Shape {
public:
    Square(int x) : Shape(x, x) {};
    double area = x * x;

    double calculate_area() { return area; }

    void show_area() { cout << "the area of this Square is:" << area << "\n"; }
};

class Rectangle : public Shape {
public:
    Rectangle(int x, int y) : Shape(x, y) {};
    double area = x * y;

    double calculate_area() { return area; }

    void show_area() { cout << "the area of this Rectangle is:" << area << "\n"; }
};

class Trapezoid : public Shape {
public:
    Trapezoid(int x, int y) : Shape(x, y) {};
    double area = x * y / 2.0;

    double calculate_area() { return area; }

    void show_area() { cout << "the area of this Trapezoid is:" << area << "\n"; }
};


class Triangle : public Shape {
public:
    Triangle(int x, int y) : Shape(x, y) {};
    double area = x * y * 0.5;

    double calculate_area() { return area; }

    void show_area() { cout << "the area of this Triangle is:" << area << "\n"; }
};


int main() {
    Shape *ptr;       //定义基类指针ptr
    Circle circ(20);     //定义圆类对象
    Square squa(20);     //定义正方形类对象
    Rectangle rect(10, 20);     //定义矩形类对象
    Trapezoid trap(20, 20);     //定义梯形类对象
    Triangle trian(20, 20);    //定义三角形类对象

    double sum = 0;

    ptr = &trian;       //指针ptr指向三角形类对象
    ptr->show_area();
    sum += ptr->calculate_area();
    ptr = &squa;      //指针ptr指向正方形类对象
    ptr->show_area();
    sum += ptr->calculate_area();
    ptr = &rect;      //指针ptr指向矩形类对象
    ptr->show_area();
    sum += ptr->calculate_area();
    ptr = &trap;      //指针ptr指向梯形类对象
    ptr->show_area();
    sum += ptr->calculate_area();
    ptr = &circ;     //指针ptr指向圆类对象
    ptr->show_area();
    sum += ptr->calculate_area();

    cout << "面积之和为： " << sum << endl;

    return 0;
}
