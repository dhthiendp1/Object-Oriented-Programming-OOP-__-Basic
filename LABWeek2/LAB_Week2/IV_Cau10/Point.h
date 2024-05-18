#pragma once
#include<iostream>
class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int xx, int yy);
	void thietlap(int xx, int yy);
	void Nhaptoado();
	void Xuattoado();
};