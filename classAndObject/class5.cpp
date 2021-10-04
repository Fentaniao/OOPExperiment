#include "iostream"

using namespace std;

class saleData {
public:
    int num;
    int quantity;
    double price;

    saleData(int Num, int Quantity, double Price);

public:
    static double discount;
    static double sum;
    static int n;

    void totalNum() const;

    void totalSale() const;

    static double average();

    static void display();
};


double saleData::discount = 0.98;
double saleData::sum = 0;
int saleData::n = 0;

saleData::saleData(int Num, int Quantity, double Price) {
    num = Num;
    quantity = Quantity;
    price = Price;
}

double saleData::average() {
    return sum / n;
}

void saleData::totalNum() const {
    n += quantity;
}

void saleData::totalSale() const {
    if (quantity >= 10)
        sum += quantity * price * 0.98 * discount;
    else
        sum += quantity * price * discount;
}


void saleData::display() {
    cout << "总销售款: " << saleData::sum << endl;
    cout << "每件商品的平均售价: " << saleData::average() << endl;
    cout << "商品销售总件数: " << saleData::n << endl;

}

int main() {
    int i;
    saleData s1(101, 5, 25), s2(102, 20, 22.5), s3(103, 75, 20);

    saleData array[3] = {s1, s2, s3};


    for (i = 0; i < 3; i++) {
        array[i].totalNum();
        array[i].totalSale();
    }

    saleData::display();

    return 0;
}