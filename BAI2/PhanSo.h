#ifndef PHANSO_H
#define PHANSO_H


class PhanSo {
private:
    int iTu;
    int iMau;

public:
    void Nhap();
    void Xuat();
    void RutGon();

    PhanSo Tong(PhanSo ps);
    PhanSo Hieu(PhanSo ps);
    PhanSo Tich(PhanSo ps);
    void Thuong(PhanSo ps);

    int SoSanh(PhanSo ps);
};


#endif // PHANSO_H
