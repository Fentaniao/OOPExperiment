#include <iostream>
#include <algorithm>
#include "cstring"

using namespace std;

//1
int Tmax(int a, int b, int c = 0, int d = 0) {
    if (b > a)
        a = b;
    if (c > a)
        a = c;
    if (d > a)
        a = d;
    return a;
}

//2
int Smin(int &a, int &b) {
    if (a > b)
        return b;
    else
        return a;
}

int Tmin(int a, int b, int c = 0, int d = 0) {
    int x;
    x = Smin(a, b);
    x = Smin(x, c);
    x = Smin(x, d);
    return x;
}

//3
int sortStringArray() {
    int i;
    string astr[5];

    cout << "请输入5个字符串：";
    for (i = 0; i < 5; i++) {
        cin >> astr[i];
    }

    sort(astr, astr + 4);
    cout << "排序结果：";
    for (i = 0; i < 5; i++)
        cout << astr[i];
    return 0;
}
//"Zhang" "Li" "Fun" "Wang" "Tan"

//4
int max(int *array, int length) {
    int i = 0;
    sort(array, array + length);
    return 0;
}
//3 9 7 5 4 0 9 6 k

int max(float *array, int length) {
    int i = 0;
    sort(array, array + length);
    return 0;
}

int max(double *array, int length) {
    int i = 0;
    sort(array, array + length);
    return 0;
}

template<typename T>
int max(T *array, int length) {
    int i = 0;
    sort(array, array + length);
    return 0;
}


int main() {

//    1
//    int a, b, c, d;
//    cout << "输入待比较的数据：";
//    cin >> a >> b >> c >> d;
//    cout << "a,b和0中的最大值是：" << Tmax(a, b) << endl;
//    cout << "a,b,c和0中的最大值是：" << Tmax(a, b, c) << endl;
//    cout << "a,b,c和d中的最大值是：" << Tmax(a, b, c, d) << endl;

//    2
//    int a, b, c, d;
//    cout << "输入待比较的数据：";
//    cin >> a >> b >> c >> d;
//    cout << "a,b中的最小值是：" << Smin(a, b) << endl;
//    cout << "a,b,c和0中的最小值是：" << Tmin(a, b, c) << endl;
//    cout << "a,b,c和d中的最小值是：" << Tmin(a, b, c, d) << endl;

//    3
//    sortStringArray();

//    4
//    float array[10];
//    int i = 0;
//    cout << "输入数据：";
//    while (cin >> array[i++]);
//    int length = i - 1;
//
//    max(array, length);
//    cout << "排序结果：";
//    for (i = 0; i < length; i++) {
//        cout << array[i] << ' ';
    }

    return 0;
}
