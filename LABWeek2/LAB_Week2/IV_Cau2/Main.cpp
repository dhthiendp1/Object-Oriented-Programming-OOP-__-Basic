#include "Officer.h"
#include <iostream>
using namespace std;
#include<cstdlib>  
#include<windows.h>
int main() {
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cout << "\n------------";
    Officer* dsOfficer = new Officer[n];
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin nhan vien thu " << i + 1 << ":\n";
        dsOfficer[i].Nhapofficer();
    }
    cout << "\n===================================";
    for (int i = 0; i < n; i++) {
        cout << "\nThong tin nhan vien da nhap thu " << i + 1 << ":\n";
        dsOfficer[i].Xuatofficer();
    }
    delete[] dsOfficer;
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