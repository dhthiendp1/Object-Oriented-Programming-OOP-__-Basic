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
int timsoduong(int* a, int n) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (a[i] < a[i + 1]) {
                min = a[i];
            }
        }
    }
    if (min == 0) {
        return -1;
    }
    return min;
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
    int kiemtra = timsoduong(a, n);
    if (kiemtra != -1) {
        cout << "\n So duong nho nhat cua mang la: " << kiemtra << endl;
    }
    else {
        cout << "Khong co gia tri duong. Suy ra " << kiemtra <<endl;
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