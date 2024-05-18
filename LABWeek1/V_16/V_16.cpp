#include<iostream>
#include<stdio.h>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void nhap(int mang[],int n) {
    for(int i=0;i<n;i++) {
        cout<<"[" << i + 1 << "]: ";
        cin>>mang[i];
    }
}
void xuat(int mang[],int n) {
    cout<< "mang da nhap la: \n";
    for(int i=0;i<n;i++) {
        cout << mang[i] << " ";
    }
    cout<<endl;
}
float tinhTBC(int mang[],int n) {
    float tong = 0.0;
    float dem = 0.0;
    for(int i=0;i<n;i++) {
        if (mang[i]>0) {
            tong += mang[i];
            dem++;
        }
    }
    if(dem>0)
        return tong/dem;
    else
        return 0;
}
int main() {
    int n;
    cout << "nhap so phan tu cua mang: ";
    cin >> n;
    int mang[100];
    nhap(mang,n);
    xuat(mang,n);
    float tb = tinhTBC(mang, n);
    printf("TBC so duong la: %.2f\n", tb);
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
