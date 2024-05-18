#include "MatHang.h"

class MayTinh : public MatHang {
private:
    string Tenmt;
public:
    MayTinh();
    MayTinh(string Tenmt, bool kt);
    void NhapMatHang();
    void XuatMatHang();
    void displayLoaiMatHang();
};