#pragma once
#include<iostream>
#include <string>
#include "Date.h"
using namespace std;
class Nhansu
{
private:
    string Manhansu, Hoten;
    Date NS;
public:
    Nhansu();
    void NhapNS();
    void XuatNS();
};

