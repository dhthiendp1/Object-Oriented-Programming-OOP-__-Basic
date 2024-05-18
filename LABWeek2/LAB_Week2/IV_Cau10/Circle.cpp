#include<iostream>
#include<cmath>
#include"Circle.h"
using namespace std;
double pi = 3.14;
void Circle::thietlap(string sh, int xx, int yy, float rr) {
    MyColor::Nhapsohieumau(sh);
    toado.thietlap(xx, yy);
    r = rr;
}
float Circle::S() {
    return pi * r * r;
}
void Circle::XuatCircle() {
    Xuatsohieumau();
    cout << "\nDiem: ";
    toado.Xuattoado();
    cout << "\nBan kinh: " << r;
    cout << "\nDien tich: " << S() << endl;
}
bool Circle::operator>(Circle& c) {
    return this->S() > c.S();
}