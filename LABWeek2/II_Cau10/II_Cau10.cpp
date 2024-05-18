#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void nhapMang(int* a, int& n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu a[" << i + 1 << "]=  ";
        cin >> *(a + i);
    }
}
void xuatMang(int* a, int n) {

    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
}
void timKiem(int* arr, int n, int x) {
    int kiemtra = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << " Vi tri cua " << x << " la: [" << i+1 << "]" << endl;
            kiemtra = 1;
        } 
    }
    if (kiemtra == 0) {
        cout << " Khong tim thay " << x << " trong mang da nhap" << endl;
    }
}
int main() {
    int n,x;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    int* a = new int[n];
    nhapMang(a, n);
    cout << "Mang da nhap la:\n";
    xuatMang(a, n);
    cout << "\n------------------";
    cout << "Nhap x can tim: " << endl;
    cin >> x;
    timKiem(a, n, x);
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
    system("pause");
    return 0;
}