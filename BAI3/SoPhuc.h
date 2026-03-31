#ifndef SOPHUC_H
#define SOPHUC_H


class SoPhuc
{
    public:
        void Nhap();
        void Xuat();
        void Thuong(SoPhuc &b);
        SoPhuc Tong(SoPhuc &b);
        SoPhuc Hieu(SoPhuc &b);
        SoPhuc Tich(SoPhuc &b);

    private:
        int iThuc,iAo;
};

#endif // SOPHUC_H
