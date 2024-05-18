#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
#include "Complex.h"
int main() {
    Complex x, y;
    cout << "\nNhap so phuc thu nhat:\n";
    x.NhapSoPhuc();
    cout << "Nhap so phuc thu hai:\n";
    y.NhapSoPhuc();
    cout << "\nCac so phuc da nhap la: ";
    x.InSoPhuc();
    cout << endl;
    y.InSoPhuc();
    cout << "\n------------------";
    cout << "\nTong hai so phuc: ";
    Complex tong = x + y;
    tong.InSoPhuc();
    cout << endl;
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
