#include <iostream>
#include "Myfile.h"
#include<cstdlib>  
#include<windows.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of files: ";
    cin >> n;

    Myfile* files = new Myfile[n];

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for file " << i + 1 << ":\n";
        files[i].NhapThongTinFile();
    }

    Myfile largestFile = files[0];
    for (int i = 1; i < n; ++i) {
        if (files[i] > largestFile) {
            largestFile = files[i];
        }
    }
    cout << "File with the largest size:\n";
    cout << "Date: ";
    cout << "\nFilename: ";
    largestFile.Xuatfilemax();
    delete[] files;
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
