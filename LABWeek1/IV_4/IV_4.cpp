#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
int tinhdayfibo(int n) {
    if (n <= 1)
        return n;
    else
        return tinhdayfibo(n - 1) + tinhdayfibo(n - 2);
}
int main() {
    cout << "10 so fibonanci dau tien la: ";
    for (int i = 0; i < 10; i++) {
        cout << tinhdayfibo(i) << " ";
    }
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
