#include<iostream>
#include<stdio.h>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void nhap(int mang[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "[" << i + 1 << "]: ";
        cin >> mang[i];
    }
}
void xuat(int mang[], int n) {
    cout << "mang da nhap la: \n";
    for (int i = 0; i < n; i++) {
        cout << mang[i] << " ";
    }
    cout << endl;
}
int tinhsolan(int x, int socuamang ) {
    int dem = 0;
    while (socuamang> 0) {
        if (socuamang % 10 == x) {
            dem++;
        }
        socuamang/= 10;
    }
    return dem;
}
int main() {
    int n;
    cout<< "nhap so phan tu cua mang: ";
    cin>>n;
    int mang[100];
    nhap(mang,n);
    xuat(mang,n);
    int x;
    cout<< "nhap so x muon tim:";
    cin>>x;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        dem += tinhsolan(x,mang[i]);
    }
    cout << " So lan xuat hien cua " << x << " la : " << dem << endl;
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
