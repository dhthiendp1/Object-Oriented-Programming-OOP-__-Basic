#pragma once
#include<iostream>
#include <format>
#include <string>
using namespace std;
class Student {
    private:
        string ten;
        double diemky1, diemky2;
    public:
        Student();
        Student(string, double, double);
        string laytenSV();
        void Nhap();
        void Xuat();
        bool KiemtraDTB();
};
