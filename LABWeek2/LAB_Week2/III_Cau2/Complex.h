#pragma once
#include<iostream>
using namespace std;
class Complex
{
private:
    double pt; 
    double pa; 
public:
    Complex(); 
    Complex(double p_thuc, double p_ao); 
    void NhapSoPhuc(); 
    void InSoPhuc(); 
    Complex operator+(const Complex& x); 
};
