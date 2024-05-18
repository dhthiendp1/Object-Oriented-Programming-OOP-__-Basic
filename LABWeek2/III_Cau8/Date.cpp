#include "Date.h"
#include<iostream>
using namespace std;

Date::Date()
{
    int Day(0); 
    int Month(0); 
    int Year(0);
}

void Date::NhapDate()
{
    cout << "Nhap ngay: "; 
    cin >> Day;
    cout << "Nhap thang: "; 
    cin >> Month;
    cout << "Nhap nam: "; 
    cin >> Year;
}

void Date::XuatDate()
{
    cout << Day << "/" << Month << "/" << Year;
}
