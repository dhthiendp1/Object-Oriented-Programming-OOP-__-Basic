#include<iostream>
#include "PS.h"
#include<cstdlib>  
#include<windows.h>
using namespace std;
void swap(int* a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main() {
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;
    PS* a = new PS[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ": ";
        a[i].Nhap();
    }
    PS tong;
    for (int i = 0; i < n; i++) {
        tong = tong + a[i];
    }
    cout << "Tong cua mang phan so: ";
    tong.Xuat();
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                swap(a[i], a[j]);
            }
        }
    }
    PS min = a[1];
    PS max = a[n-1];
    cout << "Sap xep mang tang dan: ";
    for (int i = 0; i < n; i++) {
        a[i].Xuat();
        cout << " ";
    }
    cout << "\nPhan so lon nhat :"; 
    max.Xuat();
    cout << "\nPhan so nho nhat :";
    min.Xuat();
    delete[] a;
    // Sử dụng hàm getenv để lấy tên máy tính từ biến môi trường COMPUTERNAME
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);

    if (GetComputerNameA(computerName, &size)) {
        cout << "\nTen may tinh la: " << computerName << endl;
    }
    else {
        cout << "\nKhong the lay ten may tinh." << endl;
    }
    system ("Pause");
    return 0;
}

