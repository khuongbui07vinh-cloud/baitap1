#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main() {
    ThoiGian tg;

    cout << "Nhap thoi gian hien tai:\n";
    tg.Nhap();

    cout << "\nThoi gian vua nhap: ";
    tg.Xuat();

    ThoiGian tiepTheo = tg.TinhCongThemMotGiay();
    cout << "\nThoi gian sau 1 giay: ";
    tiepTheo.Xuat();

    cout << endl;
    return 0;
}