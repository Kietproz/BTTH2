#include<iostream>
#include "Date.h"
using namespace std;
void Date::Nhap(){
    cout<<"Nhap ngay: "; cin>>iNgay;
    cout<<"Nhap thang: "; cin>>iThang;
    cout<<"Nhap nam: "; cin>>iNam;
}
void Date:: Xuat(){
    if(iNgay<10){
        cout<<0;
    }
    cout<<iNgay<<"/";
    if(iThang<10){
        cout<<0;
    }
    cout<<iThang<<"/";
    if(iNam<10){
        cout<<0;
    }
    cout<<iNam<<'\n';
}
void Date::NgayThangNamTiepTheo(){
    int numDay[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    //Kiểm tra xem có phải là năm nhuận không
    if((iNam%4==0&&iNam%100!=0)||(iNam%400==0)){
        numDay[2]=29;
    }
    iNgay++;
    if(iNgay>numDay[iThang]){
        iThang++;
        if(iThang>12){
            iNgay=1;
            iThang=1;
            iNam++;
        }
        else{
            iNgay=1;
        }
    }
    cout<<"Ngay tiep theo la: "; Xuat();
}
