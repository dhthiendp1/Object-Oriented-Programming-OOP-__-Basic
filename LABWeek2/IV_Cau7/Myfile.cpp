
#include "Myfile.h"
#include <iostream>

using namespace std;
Myfile::Myfile() {
    Mytime();
    Mydate();
    filename = "";
    filesize = 0;
}

Myfile::Myfile(int hr, int mn, int sc, int d, int m, int y, string name, int size)
    : Mytime(hr,mn,sc), Mydate(d, m, y), filename(name), filesize(size) {}

void Myfile::NhapThongTinFile() {
    Nhaptime(); 
    NhapDate(); 
    cout << "Nhap ten file: ";
    cin >> filename;
    cout << "Nhap kich thuoc file: ";
    cin >> filesize;
}

bool Myfile::operator>(const Myfile& x)
{
    return filesize > x.filesize;
}

void Myfile::XuatThongTinFile() {
    Xuattime();
    XuatDate();
    cout << "Filename: " << filename << endl;
    cout << "Filesize: " << filesize << " bytes" << endl;
}
void Myfile::Xuatfilemax() {
    cout << "\nNgay nhap: ";
    Xuattime();
    cout << "\tFilename: " << filename << "\tFilesize: " << filesize << " bytes";
}