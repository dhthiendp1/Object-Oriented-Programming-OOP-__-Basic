#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
bool kiemtra(int n) {
    if (n % 2 != 0 && n != 5 && n != 7 && n != 93) {
        return true;
    }
    return false;
}

void xuat() {
    for (int i = 1; i < 100; i++) {
        if (kiemtra(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    xuat();
    // Sử dụng hàm getenv để lấy tên máy tính từ biến môi trường COMPUTERNAME
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);

    if (GetComputerNameA(computerName, &size)) {
        std::cout << "\nTen may tinh la: " << computerName << std::endl;
    }
    else {
        std::cout << "\nKhong the lay ten may tinh." << std::endl;
    }

    return 0;
}
