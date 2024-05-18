#include "MayTinh.h"
// viết định nghĩa hàm cho lớp MayTinh
MayTinh::MayTinh() {
	Tenmt = "";
	ktra = true;
}

MayTinh::MayTinh(string Ten, bool kt)
{
	this->Tenmt = Ten;
	ktra = kt;
}

void MayTinh::NhapMatHang()
{
	cout << "Nhap ten may tinh: ";
	cin.ignore();
	getline(cin, Tenmt);
}

void MayTinh::XuatMatHang()
{
	cout << "Ten may tinh: " << Tenmt << endl;
}

void MayTinh::displayLoaiMatHang()
{
	cout << "Loai may: May Tinh ";
}
