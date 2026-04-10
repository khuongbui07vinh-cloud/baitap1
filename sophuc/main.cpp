#include <iostream>
#include "sophuc.h"
using namespace std;

int main() {
    SoPhuc sp1, sp2;

    cout << "Nhap so phuc thu nhat:\n";
    sp1.Nhap();
    cout << "Nhap so phuc thu hai:\n";
    sp2.Nhap();

    cout << "\nSo phuc 1: "; sp1.Xuat();
    cout << "\nSo phuc 2: "; sp2.Xuat();

    SoPhuc tong = sp1.Tong(sp2);
    SoPhuc hieu = sp1.Hieu(sp2);
    SoPhuc tich = sp1.Tich(sp2);
    SoPhuc thuong = sp1.Thuong(sp2);

    cout << "\n\nTong: "; tong.Xuat();
    cout << "\nHieu: "; hieu.Xuat();
    cout << "\nTich: "; tich.Xuat();
    cout << "\nThuong: "; thuong.Xuat();

    cout << endl;
    return 0;
}