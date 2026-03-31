#include"SoPhuc.h"
#include<iostream>
using namespace std;
int main(){
    SoPhuc a,b;
    cout<<"Nhap so phuc a:"<<'\n';
    a.Nhap();
    cout<<"Nhap so phuc b:"<<'\n';
    b.Nhap();
    cout<<"So phuc a: "; a.Xuat();
    cout<<"So phuc b: "; b.Xuat();
    cout<<"a + b = "; a.Tong(b).Xuat();
    cout<<"a - b = "; a.Hieu(b).Xuat();
    cout<<"a * b = "; a.Tich(b).Xuat();
    cout<<"a / b = "; a.Thuong(b);
    return 0;
}
