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
    void SetScore3();

    void Disp3();
};


void student::SetScore3() {
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


void student::Disp3() {
    cout << "学号：" << number << ",姓名：" << name << endl;
    for (int i = 0; i < k; ++i) {
        cout << description[i] << ":" << score[i] << "，";
    }
    cout << endl;
}


int main() {
    student stu1, stu2, stu3;

    stu1.SetScore3();
    stu2.SetScore3();
    stu3.SetScore3();

    stu1.Disp3();
    stu2.Disp3();
    stu3.Disp3();


    return 0;
}


/*

111901350 "周锐阳" 100 100 100

012001330 "小明" 90 80 70

122101310 "李华" 70 80 90



*/
