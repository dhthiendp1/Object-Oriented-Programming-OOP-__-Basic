#include<iostream>
#include <format>
#include <string>
using namespace std;
#include "Student.h"
Student::Student() {
    ten = "";
    diemky1 = diemky2 = 0.0;
}

Student::Student(string n, double s1, double s2) {
    ten = n;
    diemky1 = s1;
    diemky2 = s2;
}

string Student::laytenSV()
{
    return ten;
}

void Student::Nhap() {
    cout << "Ho va Ten: ";
    getline(cin, ten);
    cout << "Nhap diem ky 1: ";
    cin >> diemky1;
    cout << "Nhap diem ky 2: ";
    cin >> diemky2;
}

void Student::Xuat() {
    cout << "Ho va Ten: " << ten << ", Diem ky 1: " << diemky1<< ", Diem ky 2: " << diemky2 << endl;
}

bool Student::KiemtraDTB() {
    return ((diemky1 + 2 * diemky2) / 3) >= 5;
}
