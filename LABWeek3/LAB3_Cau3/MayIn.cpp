#include "MayIn.h"
#include <iostream>

MayIn::MayIn()
{
	Tenmi = "";
	ktra = false;
}

MayIn::MayIn(string Ten, bool kt)
{
	this->Tenmi = Ten;
	ktra = kt;
}

void MayIn::NhapMatHang()
{
	cout << "Nhap ten may in: ";
	cin.ignore();
	getline(cin, Tenmi);
}

void MayIn::XuatMatHang()
{
	cout << "Ten may in: " << Tenmi << endl;
}

void MayIn::displayLoaiMatHang()
{
	cout << "Loai May: May In ";
}
