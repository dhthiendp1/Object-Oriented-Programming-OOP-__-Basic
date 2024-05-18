#pragma once
#include<iostream>
using namespace std;
class Mydate {
private:
    int day, month, year;

public:
    Mydate(); 
    Mydate(int d, int m, int y); 
    void NhapDate(); 
    void XuatDate(); 
    bool operator>=(const Mydate& other); 
};