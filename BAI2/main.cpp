#include<PhanSo.h>
#include<iostream>
using namespace std;
int main(){
    PhanSo a,b;
    cout<<"Nhap phan so a:"<<'\n';
    a.Nhap();
    cout<<"Nhap phan so b:"<<'\n';
    b.Nhap();
    cout<<"Phan so a: "; a.RutGon(); a.Xuat(); cout<<'\n';
    cout<<"Phan so b: "; b.RutGon(); b.Xuat(); cout<<'\n';
    cout<<"a + b = "; a.Tong(b).Xuat(); cout<<'\n';
    cout<<"a - b = "; a.Hieu(b).Xuat(); cout<<'\n';
    cout<<"a * b = "; a.Tich(b).Xuat(); cout<<'\n';
    cout<<"a / b = "; a.Thuong(b); cout<<'\n';
        // So sánh
    int cmp = a.SoSanh(b);
    if (cmp == 1)
        cout << "\nA > B";
    else if (cmp == 0)
        cout << "\nA = B";
    else
        cout << "\nA < B";

    return 0;

}
