#pragma once
#include "MayTinh.h"
#include "MayIn.h"
#include "MatHang.h"
#include <vector>
using namespace std;
class DSMatHang {
private:
    MatHang** ds; 
    int n;       
public:
    DSMatHang(int size);        
    ~DSMatHang();             
    void NhapDS();     
    void XuatDS();   
};