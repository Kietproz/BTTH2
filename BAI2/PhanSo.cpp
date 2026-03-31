#include <iostream>
#include<algorithm>
#include "PhanSo.h"
using namespace std;

void PhanSo::Nhap() {
    cout << "Nhap tu: ";
    cin >> iTu;
    do {
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}

void PhanSo::Xuat() {
    if(iTu==0||iMau==1){
        cout<<iTu;
        return;
    }
    cout << iTu << "/" << iMau;
}

void PhanSo::RutGon() {
    // Tim uoc chung lon nhat
    int ucln = __gcd(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;

    // Đưa dấu về tử
    if (iMau < 0) {
        iTu = -iTu;
        iMau = -iMau;
    }
}

PhanSo PhanSo::Tong(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(PhanSo ps) {
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}
void PhanSo::Thuong(PhanSo ps) {
    if(ps.iTu==0){
        cout<<"Khong the chia duoc cho 0";
        return;
    }
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    kq.Xuat();
}

int PhanSo::SoSanh(PhanSo ps) {
    int left = iTu * ps.iMau;
    int right = ps.iTu * iMau;

    if (left > right) return 1;
    if (left == right) return 0;
    return -1;
}

