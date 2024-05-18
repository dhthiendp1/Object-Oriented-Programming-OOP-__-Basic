#include <iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
int kiemtratg(int &a, int &b, int &c) {
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    if (a == b && b == c)
        return 1;
    if (a == b || a == c || b == c)
        return 2;
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        return 3;
    return 4;
}

int main() {
    int a, b, c;
    cout << "nhap canh a: ";
    cin >> a;
    cout << "nhap canh b: ";
    cin >> b;
    cout << "nhap canh c: ";
    cin >> c;

    int loai = kiemtratg(a, b, c);
    switch (loai) {
    case 0:
        cout << "khong phai tam giac";
        break;
    case 1:
        cout << "tam giac deu";
        break;
    case 2:
        cout << "tam giac can";
        break;
    case 3:
        cout << "tam giac vuong";
        break;
    case 4:
        cout << "tam giac thuong";
        break;
    }
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
