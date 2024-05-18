#pragma once
#include"Person.h"
#include <string>
#include<iostream>
using namespace std;
class Officer : public Person {
private:
    float salary;
public:
    Officer();
    Officer(string name, string address, string phone, int d, int m, int y, float s);
    void Nhapofficer();
    void Xuatofficer();
};