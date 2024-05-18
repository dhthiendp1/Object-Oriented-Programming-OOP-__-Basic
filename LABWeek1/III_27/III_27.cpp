#include<iostream>
#include<math.h>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void nhap(float &x) {
    cout << "Nhap x: ";
    cin >> x;
}
int main() {
    float x, y, S;
    nhap(x);
    nhap(y);
    S = pow(x, y);
    cout << "tinh x^y = " << S << endl;
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
