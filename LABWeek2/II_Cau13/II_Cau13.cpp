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
bool kiemtrasont(int n) {
    int b[8] = {2,3,4,5,6,7,8,9};
    int kiemtra{};
    if (n < 2) {
        return false;
    }
    if (n > 2 && n < 9) {
        int arr[] = { 2, 3, 5, 7 };
        for (int i = 0; i < 4; i++)
            if (n == arr[i]) return true;
        return false;
    }
    else if (n > 9) {
        for (int i = 1; i < 9; i++) {
            if (n % b[i] == 0) {
                kiemtra = false;
                return false;
            }
        }
    }
    else if (kiemtra != false) {
            return true;
        }
}
int timSoNguyenToDauTien(int* a, int n) {
    for (int i = 0; i < n; i++) {
        if (kiemtrasont(a[i]) == true) {
           return a[i];
        }
    }
    return -1;
}
int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    int* a = new int[n];
    nhapMang(a, n);
    cout << "Mang da nhap la:\n";
    xuatMang(a, n);
    cout << "\n------------------";
    int kiemtra = timSoNguyenToDauTien(a, n);
    if (kiemtra != -1) {
        cout << "\n So nguyen to dau tien cua mang la: " << kiemtra << endl;
    }
    else {
        cout << "Khong co so nguyen to trong mang.Suy ra " << kiemtra << endl;
    }
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