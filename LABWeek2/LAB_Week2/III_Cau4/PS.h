#pragma once
#include <iostream>
using namespace std;
class PS {
private:
    int tu, mau;
public:
    PS();
    PS(int x, int y);
    void Nhap();
    void Xuat();
    int UCLN(int x, int y);
    void RutGon();
    PS operator+(PS);
    PS operator-(PS);
    PS operator*(PS);
    PS operator/(PS);
    bool operator>(PS);
};

