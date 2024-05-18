#include "Mytime.h"

Mytime::Mytime() 
{
	hour = 1;
	min = 1;
	sec = 1;
}

Mytime::Mytime(int hr, int mn, int sc)
{
	hour = hr;
	min = mn;
	sec = sc;
}

void Mytime::Nhaptime() {
    do {
        cout << "\nNhap gio: ";
        cin >> hour;
        if (hour < 0 || hour > 24) {
            cout << "\nNgay nhap khong dung! Nhap lai." << endl;
        }
    } while (hour < 0 || hour > 24);

    do {
        cout << "Nhap phut: ";
        cin >> min;
        if (min < 0 || min > 60) {
            cout << "\nThang nhap khong dung. Nhap lai!" << std::endl;
        }
    } while (min < 0 || min > 60);

    do {
        cout << "Nhap giay: ";
        cin >> sec;
        if (sec < 0 || sec > 60) {
            cout << "\nThang nhap khong dung. Nhap lai!" << std::endl;
        }
    } while (sec < 0 || sec > 60);
}


void Mytime::Xuattime() {
    cout << hour << ":" << min << "-" << sec << endl;
}