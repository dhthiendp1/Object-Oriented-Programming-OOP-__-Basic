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
void lietKeTanSuatXuatHien(int mang[],int n){
    int cacsotansuat[10]={}; 
    for (int i=0;i<n;i++){
        int so=mang[i];
        while(so > 0){
            int x=so%10;
            cacsotansuat[x]++;
            so/=10;
        }
    }
    for(int i=0;i<10;i++){
        if(cacsotansuat[i]>0){
            cout <<"So lan xuat hien cua so " << i << "la:" << cacsotansuat[i] << endl;
        }
    }
}
int main() {
    int n;
    cout << "nhap so phan tu cua mang: ";
    cin >> n;
    int mang[100];
    nhap(mang,n);
    xuat(mang,n);
    lietKeTanSuatXuatHien(mang, n);
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
