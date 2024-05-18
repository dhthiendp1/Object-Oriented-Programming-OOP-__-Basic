#include "MyDate.h"

MyDate::MyDate(){}

MyDate::MyDate(int day, int month, int year):day(day),month(month),year(year){}

void MyDate::Nhapdate()
{
	cout << "\nNhap (day month year): ";
	cin >> day >> month >> year;
}

void MyDate::Indate()
{
	cout << day<< "/" <<month << "/" <<year << endl;
}

bool MyDate::operator>(MyDate& date)
{
	if (year != date.year)
		return year > date.year;
	if (month != date.month)
		return month > date.month;
	return day > date.day;
}