#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
int tinhxmuy(int x, int y) {
    if (y == 0)
        return 1;
    else if (y > 0)
        return x * tinhxmuy(x, y - 1);
}
int main() {
    int x;
    int y;
    cout << "Tinh x ^ y: " << endl;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "P (" << x << "," << y << " ) = " << tinhxmuy(x, y) << endl;
    // Sử dụng hàm getenv để lấy tên máy tính từ biến môi trường COMPUTERNAME
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);

    if (GetComputerNameA(computerName, &size)) {
        cout << "\nTen may tinh la: " << computerName << endl;
    }
    else {
        cout << "\nKhong the lay ten may tinh." << endl;
    }
    return 0;
}

