#include<iostream>
#include"Date.h"
using namespace std;
int main(){
    Date a;
    a.Nhap();
    cout<<"Ngay hien tai: ";
    a.Xuat();
    a.NgayThangNamTiepTheo();
    return 0;
}
