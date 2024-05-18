#pragma once
#include "Mytime.h"
#include "Mydate.h"
#include <string>
using namespace std;

class Myfile : public Mytime, public Mydate {
private:
    string filename;
    int filesize;

public:
    Myfile();
    Myfile(int hr, int mn, int sc, int d, int m, int y, string name, int size);
    void XuatThongTinFile();
    void NhapThongTinFile();
    bool operator > (const Myfile& x);
    void Xuatfilemax();
};