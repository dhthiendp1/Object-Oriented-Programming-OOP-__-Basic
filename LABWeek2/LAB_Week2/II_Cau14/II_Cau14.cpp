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
int timPhanTuItNhat(int* arr, int n) {
    int phantucantim = arr[0];
    int tansuat = n;
    for (int i = 1; i < n; i++) {
        int soLanXuatHien = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                soLanXuatHien++;
            }
        }
        if (soLanXuatHien < tansuat) {
            phantucantim = arr[i];
            tansuat = soLanXuatHien;
        }
    }
    return phantucantim;
}
int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    int* a = new int[n];
    nhapMang(a,n);
    cout << "Mang da nhap la:\n";
    xuatMang(a,n);
    cout << "\n------------------";
    int phanTuItNhat = timPhanTuItNhat(a,n);
    cout << "\n Phan tu co tan suat xuat hien it nhat trong mang la: " << phanTuItNhat << endl;
    delete[] a;
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