#include "MatHang.h"

class MayIn : public MatHang {
private:
    string Tenmi;
public:
    MayIn();
    MayIn(string Tenmi, bool kt);
    void NhapMatHang();
    void XuatMatHang();
    void displayLoaiMatHang();
};