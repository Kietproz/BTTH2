#include <iostream>
#include"GioPhutGiay.h"
using namespace std;

int main()
{
    GioPhutGiay a;
    a.Nhap();
    cout<<"Gio hien tai: ";
    a.Xuat();
    cout<<"Sau khi cong them 1 giay: ";
    a.TinhCongThemMotGiay();
    return 0;
}
