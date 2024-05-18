#include <iostream>
#include "DSMatHang.h"
#include<cstdlib>  
#include<windows.h>
int main() {
    int numMay;
    cout << "\nNhap so luong may trong mang: ";
    cin >> numMay;
    cout << "\n-----------------";
    DSMatHang ds(numMay); 

    ds.NhapDS(); 

    cout << "\n=======Thong tin cac may trong mang:=======\n";
    ds.XuatDS(); 
    // Sử dụng hàm getenv để lấy tên máy tính từ biến môi trường COMPUTERNAME
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);

    if (GetComputerNameA(computerName, &size)) {
        cout << "\nTen may tinh la: " << computerName << endl;
    }
    else {
        cout << "\nKhong the lay ten may tinh." << endl;
    }
    system("pause");
    return 0;
}