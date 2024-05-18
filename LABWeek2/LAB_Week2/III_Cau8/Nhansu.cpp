#include "Nhansu.h"
#include<iostream>
#include<string>
using namespace std;

Nhansu::Nhansu()
{
	string Nhansu();
	string Manhansu("");
	string Hoten("");
}

void Nhansu::NhapNS()
{
	cout << "Nhap ma nhan su: "; 
	getline(cin, Manhansu);
	cout << "Nhap ho ten: "; 
	getline(cin, Hoten);
	cout << "Nhap ngay sinh:\n";
	NS.NhapDate();
}

void Nhansu::XuatNS()
{
	cout << "Ma nhan su: " << Manhansu << endl;
	cout << "Ho ten: " << Hoten << endl;
	cout << "Ngay sinh: "; NS.XuatDate(); cout << endl;
}
