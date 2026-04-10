#include <iostream>
#include "ThoiGian.h"
using namespace std;

void ThoiGian::Nhap() {
    do {
        cin >> iGio;
         cin >> iPhut;
         cin >> iGiay;
        if (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59) {
            cout << "Thoi gian khong hop le! Vui long nhap lai.\n";
        }
    } while (iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59);
}

void ThoiGian::Xuat() {
    // Xuất định dạng HH:MM:SS
    if (iGio < 10) cout << "0"; cout << iGio << ":";
    if (iPhut < 10) cout << "0"; cout << iPhut << ":";
    if (iGiay < 10) cout << "0"; cout << iGiay;
}

ThoiGian ThoiGian::TinhCongThemMotGiay() {
    ThoiGian kq = *this;
    kq.iGiay++;
    if (kq.iGiay >= 60) {
        kq.iGiay = 0;
        kq.iPhut++;
        if (kq.iPhut >= 60) {
            kq.iPhut = 0;
            kq.iGio++;
            if (kq.iGio >= 24) {
                kq.iGio = 0;
            }
        }
    }
    return kq;
}