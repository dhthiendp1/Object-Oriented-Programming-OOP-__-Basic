#pragma once
#include "MyDate.h"
#include "Officer.h"
class Person : public MyDate {
private:
    string name, address, phone;
public:
    Person();
    Person(string name, string address, string phone, int d, int m, int y);
    void NhapTT();
    void XuatTT();
};