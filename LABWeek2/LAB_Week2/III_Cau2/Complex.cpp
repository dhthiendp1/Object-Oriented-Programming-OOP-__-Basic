#include "Complex.h"
Complex::Complex()
{
	pt = 0.0;
	pa = 0.0;
}

Complex::Complex(double p_thuc, double p_ao)
{
	pt = p_thuc;
	pa = p_ao;
}

void Complex::NhapSoPhuc()
{
	cout << "Nhap phan thuc: ";
	cin >> pt;
	cout << "Nhap phan ao: ";
	cin >> pa;
}

void Complex::InSoPhuc()
{
	if (pa > 0)
		cout << pt << " + " << pa << "i";
	else cout << pt << pa << "i";
}

Complex Complex::operator+(const Complex& x)
{
	Complex temp;
	temp.pt = this->pt + x.pt;
	temp.pa = this->pa + x.pa;
	return temp;

}
