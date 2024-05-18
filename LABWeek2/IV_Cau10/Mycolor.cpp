#include<iostream>
#include"MyColor.h"
using namespace std;
MyColor::MyColor() {}
MyColor::MyColor(string sh) : sohieumau(sh) {}
void MyColor::Nhapsohieumau(string sh) {
	cout << "Nhap so hieu mau: ";
	cin.ignore();
	getline(cin, sohieumau);
}
void MyColor::Xuatsohieumau() {
	cout << "So hieu mau: " << sohieumau << endl;
}