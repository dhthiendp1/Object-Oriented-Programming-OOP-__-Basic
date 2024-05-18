#include<iostream>
#include "PS.h"
using namespace std;
PS::PS() {
    tu = 0;
    mau = 1;
}

PS::PS(int a, int b) {
    tu = a;
    mau = b;
}

void PS::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tu;
    cout << "Nhap mau so: ";
    cin >> mau;
}

void PS::Xuat() {
    cout << tu << "/" << mau;
}
int PS::UCLN(int x, int y)
{
    for (int i = min(x, y); i > 0; i--) {
        if (x % i == 0 && y % i == 0)
            return i;
    }
}
void PS::RutGon() {
    int ucln = UCLN(tu, mau);
    tu /= ucln;
    mau /= ucln;
}

PS PS::operator+(PS a) {
    PS tong;
    tong.tu = tu * a.mau + mau * a.tu;
    tong.mau = mau * a.mau;
    tong.RutGon();
    return tong;
}

PS PS::operator-(PS a) {
    PS hieu;
    hieu.tu = tu * a.mau - mau * a.tu;
    hieu.mau = mau * a.mau;
    hieu.RutGon();
    return hieu;
}

PS PS::operator*(PS a) {
    PS tich;
    tich.tu = tu * a.tu;
    tich.mau = mau * a.mau;
    tich.RutGon();
    return tich;
}

PS PS::operator/(PS a) {
    PS thuong;
    thuong.tu = tu * a.mau;
    thuong.mau = mau * a.tu;
    thuong.RutGon();
    return thuong;
}

bool PS::operator>(PS a) {
    return (float)tu / mau < (float)a.tu / a.mau;
}



