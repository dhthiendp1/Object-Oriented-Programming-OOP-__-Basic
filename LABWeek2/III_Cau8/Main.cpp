#include "Nhansu.h"
#include <iostream>
using namespace std;
#include<cstdlib>  
#include<windows.h>
int main() {
    Nhansu x;
    cout << "Nhap thong tin nhan su:\n";
    x.NhapNS();
    cout << "\nThong tin nhan su:\n";
    x.XuatNS();
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
