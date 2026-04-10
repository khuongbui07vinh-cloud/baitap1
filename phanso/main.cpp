#include <iostream>
#include "phanso.h"
using namespace std;

int main() {
    PhanSo a, b;

    cout << "phan so A:\n";
    a.Nhap();
    cout << "phan so B:\n";
    b.Nhap();

    cout << "\nPhan so A sau rut gon: ";
    a.RutGon(); a.Xuat();
    cout << "\nPhan so B sau rut gon: ";
    b.RutGon(); b.Xuat();

    PhanSo tong = a.Tong(b);
    PhanSo hieu = a.Hieu(b);
    PhanSo tich = a.Tich(b);
    PhanSo thuong = a.Thuong(b);

    cout << "\n\nTong: "; tong.Xuat();
    cout << "\nHieu: "; hieu.Xuat();
    cout << "\nTich: "; tich.Xuat();
    cout << "\nThuong: "; thuong.Xuat();

    int cmp = a.SoSanh(b);
    if (cmp == 1) cout << "\nKet qua so sanh: A > B";
    else if (cmp == 0) cout << "\nKet qua so sanh: A = B";
    else cout << "\nKet qua so sanh: A < B";

    cout << endl;
    return 0;
}