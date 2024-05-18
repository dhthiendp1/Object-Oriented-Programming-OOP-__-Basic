#pragma once
#include<iostream>
#include<string>
using namespace std;
class MatHang
{
protected:
    bool ktra;//dể đánh dấu loại May
public:
    MatHang();
    MatHang(bool kt);
    virtual void NhapMatHang();
    virtual void XuatMatHang();
    virtual void displayLoaiMatHang();
    bool Get_LoaiSMay() {
        return ktra; //true: May tinh, false: May in
    }
    void Set_LoaiMay(bool kt) {
        ktra = kt;
    }
};