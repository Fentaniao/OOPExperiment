#include <iostream>

using namespace std;

const int k = 3;


class student {
public:
    string number;
    string name;
    string description[k]{"语文", "数学", "英语"};
    int score[k]{0};
public:
    void SetScore2();

    void Disp2();
};


void student::SetScore2() {
    cout << "请输入学号：";
    cin >> number;
    cout << "请输入姓名：";
    cin >> name;

    int i = 0;
    do {
        cout << "请输入" << description[i] << "成绩：";
        cin >> score[i];
        i++;
    } while (i < k);
    cout << endl;
}


void student::Disp2() {
    cout << "学号：" << number << ",姓名：" << name << endl;
    for (int i = 0; i < k; ++i) {
        cout << description[i] << ":" << score[i] << "，";
    }
    cout << endl;
}


int main() {
    student stu1;

    stu1.SetScore2();

    stu1.Disp2();

    return 0;
}


/*

111901350 "周锐阳" 100 100 100

*/
