#include <iostream>

using namespace std;

class CCubic {
private:
    double len;
public:
    CCubic();

    double calculate_Volume();

    void print_Volume();
};           //需加；
CCubic::CCubic() {
    cout << "请输入正方体边长:";
    cin >> len;
}

double CCubic::calculate_Volume() {
    return len * len * len;
};

void CCubic::print_Volume() {
    cout << "正方体积:" << calculate_Volume() << endl;
}

int main() {
    int sel;
    sel = 1;
    do {
        cout << "选择:\n\t 1. 计算正方体积；2. 退出程序\n";
        cin >> sel;
        switch (sel) {
            case 1: {
                CCubic c;
                c.print_Volume();
                break;
            }
            default:
                break;
        }
    } while (sel == 1);

    return 0;
}
