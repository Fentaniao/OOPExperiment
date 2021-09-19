#include <iostream>

using namespace std;

const int k = 1;


class student {
public:
    string number;
    string name;
    string description[k]{"成绩"};
    int score[k]{0};
public:
    void SetScore1();

    void Disp1();
};


void student::SetScore1() {
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


void student::Disp1() {
    cout << "学号：" << number << ",姓名：" << name << endl;
    for (int i = 0; i < k; ++i) {
        cout << description[i] << ":" << score[i] << "，";
    }
    cout << endl;
}


int main() {
    student stu1;

    stu1.SetScore1();

    stu1.Disp1();

    return 0;
}
