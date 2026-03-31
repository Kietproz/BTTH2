#include "SoPhuc.h"
#include<iostream>
using namespace std;
void SoPhuc::Nhap(){
    cout<<"Nhap phan ao: "; cin>>iThuc;
    cout<<"Nhap phan thuc: ";cin>>iAo;
}
void SoPhuc::Xuat(){
    if (iAo >= 0)
        cout << iThuc << " + " << iAo << "i" << endl;
    else
        cout << iThuc << " - " << -iAo << "i" << endl;
}
// Phép cộng: (a + bi) + (c + di) = (a+c) + (b+d)i
SoPhuc SoPhuc:: Tong(SoPhuc &b) {
    SoPhuc res;
    res.iThuc = iThuc + b.iThuc;
    res.iAo = iAo + b.iAo;
    return res;
}

// Phép trừ: (a + bi) - (c + di) = (a-c) + (b-d)i
SoPhuc SoPhuc:: Hieu(SoPhuc &b) {
    SoPhuc res;
    res.iThuc = iThuc - b.iThuc;
    res.iAo = iAo - b.iAo;
    return res;
}

// Phép nhân: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
SoPhuc SoPhuc:: Tich(SoPhuc &b) {
    SoPhuc res;
    res.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    res.iAo = iThuc * b.iAo + iAo * b.iThuc;
    return res;
}

// Phép chia: (a + bi) / (c + di)
void SoPhuc:: Thuong(SoPhuc &b) {
    SoPhuc res;
    double mau = b.iThuc * b.iThuc + b.iAo * b.iAo;
    if (mau == 0) {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return;
    }
    res.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    res.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;
    res.Xuat();
}
