#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
float S(int n) {
    if (n == 1)
        return 1;
    else
        return 1 / ((n * (n + static_cast<float>(1))) / 2) + S(n - 1);
}

int main() {
    int n;
    cout << "nhap n: ";
    cin >> n;
    cout << " S(" << n << ") =: " << S(n) << endl;
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
