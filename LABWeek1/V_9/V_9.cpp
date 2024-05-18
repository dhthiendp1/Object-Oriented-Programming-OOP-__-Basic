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
    cout << "mang da nhap la: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int mang[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                int x = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = x;
            }
        }
    }
}
int main() {
    int n;
    cout << "nhap so phan tu cua mang: ";
    cin >> n;
    int mang[100];
    nhap(mang, n);
    xuat(mang, n);
    bubbleSort(mang, n);
    cout << "Sap xep mang: " << endl;
    xuat(mang, n);
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
