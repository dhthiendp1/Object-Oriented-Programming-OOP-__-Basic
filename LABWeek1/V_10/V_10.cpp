#include <iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void nhap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "[ " << i + 1 << "]: ";
        cin >> arr[i];
    }
}
void xuat(int arr[], int n) {
    cout << "mang da nhap la: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int timKiem(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "nhap so phan tu cua mang: ";
    cin >> n;
    int mang[100];
    nhap(mang, n);
    xuat(mang, n);
    int x;
    cout << "Nhap gia tri x can tim: ";
    cin >> x;
    int vitri = timKiem(mang, n, x);
    if (vitri != -1) {
        cout << x << " = [" << vitri << "] ";
    }
    else {
        cout  << x << " khong co trong mang.";
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
