#include "GioPhutGiay.h"
#include<iostream>
using namespace std;
void GioPhutGiay::Xuat()
{
    if(iGio<10){
        cout<<0;
    }
    cout<<iGio<<" : ";
    if(iPhut<10){
        cout<<0;
    }
    cout<<iPhut<<" : ";
    if(iGiay<10){
        cout<<0;
    }
    cout<<iGiay<<'\n';
}
void GioPhutGiay::Nhap(){
    cout<<"Nhap gio: "; cin>>iGio;
    cout<<"Nhap phut: "; cin>>iPhut;
    cout<<"Nhap giay: "; cin>>iGiay;
}
void GioPhutGiay::TinhCongThemMotGiay(){
    iGiay++;
    if(iGiay>=60){
        iGiay=0;
        iPhut++;
        if(iPhut>=60){
            iPhut=0;
            iGio++;
            if(iGio>=24){
                iGio=0;
            }
        }

    }
    Xuat();
}
