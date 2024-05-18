#include "Mydate.h"
#include <iostream>
using namespace std;
Mydate::Mydate() {
    day = 1;
    month = 1;
    year = 2000;
}

Mydate::Mydate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Mydate::NhapDate() {
    do {
        cout << "\nNhap ngay: ";
        cin >> day;
        if (day < 1 || day > 31) {
            cout << "\nNgay nhap khong dung! Nhap lai." << endl;
        }
    } while (day < 1 || day > 31);

    do {
        cout << "Nhap thang: ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "\nThang nhap khong dung. Nhap lai!" << std::endl;
        }
    } while (month < 1 || month > 12);

    cout << "\nNhap nam: ";
    cin >> year;
}


void Mydate::XuatDate() {
    cout << day << "-" << month << "-" << year << endl;
}

bool Mydate::operator>=(const Mydate& other) {
    if (year > other.year)
        return true;
    else if (year == other.year && month > other.month)
        return true;
    else if (year == other.year && month == other.month && day >= other.day)
        return true;
    return false;
}