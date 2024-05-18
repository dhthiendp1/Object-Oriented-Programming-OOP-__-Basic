#pragma once
#include<iostream>
#include<cmath>
#include"MyColor.h"
#include"Point.h"
class Circle :public MyColor {
private:
	Point toado;
	float r;
public:
	Circle() :MyColor(), toado(), r(0) {}
	Circle(string sh, int x, int y, float r) :MyColor(sh), toado(x, y), r(r) {}
	float S();
	void thietlap(string sh, int x, int y, float r);
	void XuatCircle();
	bool operator > (Circle& a);
};