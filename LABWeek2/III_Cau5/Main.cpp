#include<iostream>
#include <format>
#include <string>
using namespace std;
#include "Student.h"
#include<cstdlib>  
#include<windows.h>
int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        cout << "Nhap diem sinh vien thu " << i + 1 << endl;
        students[i].Nhap();
        cin.ignore();
    }

    cout << "\nDanh sách sinh viên:\n";
    for (int i = 0; i < 5; i++) {
        students[i].Xuat();
    }

    cout << "\nDanh sach SV diem trung binh >=5:\n";
    for (int i = 0; i < 5; i++) {
        if (students[i].KiemtraDTB()) {
            cout << students[i].laytenSV() << endl;
        }
    }
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
