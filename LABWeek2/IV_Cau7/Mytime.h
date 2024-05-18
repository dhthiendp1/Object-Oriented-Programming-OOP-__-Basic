#pragma once
#include <iostream>
using namespace std;
class Mytime {
protected:
    int hour;
    int min;
    int sec;
public:
    Mytime();
    Mytime(int hr, int mn, int sc);
    void Nhaptime();
    void Xuattime();
};