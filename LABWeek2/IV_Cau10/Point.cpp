#include<iostream>
#include"Point.h"
using namespace std;
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int xx, int yy) {
	x = xx;
	y = yy;
}
void Point::thietlap(int xx, int yy) {
	x = xx;
	y = yy;
}
void Point::Nhaptoado() {
	cout << "\nNhap toa do x: ";
	cin >> x;
	cout << "\nNhap toa do y: ";
	cin >> y;
}
void Point::Xuattoado() {
	cout << "  (" << x << "," << y << ") " << endl;
}