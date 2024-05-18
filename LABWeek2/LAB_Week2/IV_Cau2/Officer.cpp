#include "Officer.h"

Officer::Officer() : salary(0.0) {}
Officer::Officer(string n, string a, string p, int d, int m, int y, float salary)
	:Person(n,a,p,d,m,y),salary(salary) {}


void Officer::Nhapofficer()
{
	Person::NhapTT();
	cout << "Nhap Salary cua nhan vien:";
	cin >> salary;
}

void Officer::Xuatofficer()
{
	Person::XuatTT();
	cout << "Salary: " << salary << endl;
}