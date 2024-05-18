#include "Person.h"
#include "MyDate.h"
#include <string>
#include<iostream>
using namespace std;
Person::Person(){}

Person::Person(string name, string address, string phone, int d, int m, int y)
	:name(name),address(address),phone(phone),MyDate(d,m,y) {}

void Person::NhapTT()
{
	cout << "\nNhap ten nhan vien: ";
	cin >> name;
	cout << "\nNhap dia chi tin nhan vien: ";
	cin >> address;
	cout << "\nNhap SDT nhan vien: ";
	cin >> phone;
	MyDate::Nhapdate();
}

void Person::XuatTT()
{
	cout << "Name: " << name << ", \nAddress: " << address << ", \nPhone: " << phone << ", \nBirthdate: ";
	MyDate::Indate();
}