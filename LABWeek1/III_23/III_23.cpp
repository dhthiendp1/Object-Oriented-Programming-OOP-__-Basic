#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void inbangcuuchuong(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    for (int i = 1; i <= 9; i++) {
        cout << "bang cuu chuong " << i << ":" << endl;
        inbangcuuchuong(i);
    }
    // Sử dụng hàm getenv để lấy tên máy tính từ biến môi trường COMPUTERNAME
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);

    if (GetComputerNameA(computerName, &size)) {
        cout << "\nTen may tinh la: " << computerName << endl;
    }
    else {
        cout << "\nKhong the lay ten may tinh." <<endl;
    }
    return 0;
}
