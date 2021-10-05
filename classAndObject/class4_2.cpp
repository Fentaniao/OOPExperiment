#include <iostream>

using namespace std;

class Date;

class Time {
public:
    Time(int, int, int);

    friend void display(Time &, Date &);

private:
    int hour, minute, sec;
};

class Date {
public:
    Date(int, int, int);

    friend void display(Time &, Date &);

private:
    int month, day, year;
};

Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    sec = s;
}

void display(Time &t, Date &d) {
    cout << t.hour << ":" << t.minute << ":" << t.sec << " ";
    cout << d.month << "/" << d.day << "/" << d.year << endl;
}

Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

int main() {
    Time t1(10, 13, 56);
    Date d1(12, 25, 2004);
    display(t1, d1);
    return 0;
}