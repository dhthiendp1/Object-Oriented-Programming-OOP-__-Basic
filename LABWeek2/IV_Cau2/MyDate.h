#pragma once
#include <iostream>

using namespace std;
class MyDate {
    int day, month, year;
public:
    MyDate();
    MyDate(int day, int month, int year);
    void Nhapdate();
    void Indate();
    bool operator>(MyDate& date);
};