#include<iostream>
#include"Circle.h"
using namespace std;
#include<cstdlib>  
#include<windows.h>
int main() {
    int n;
    cout << "\nNhap so luong duong tron:  ";
    cin >> n;
    Circle* Cir = new Circle[n];
    for (int i = 0; i < n; i++) {
        int x, y;
        string shmau;
        float bankinh;
        cout << "\nNhap mau cua duong tron " << i + 1 << ": ";
        cin >> shmau;
        cout << "\nNhap toa do x cua duong tron " << i + 1 << ": ";
        cin >> x;
        cout << "\nNhap toa do y cua duong tron " << i + 1 << ": ";
        cin >> y;
        cout << "\nNhap ban kinh cua duong tron " << i + 1 << ": ";
        cin >> bankinh;
        Cir[i].thietlap(shmau, x, y, bankinh);
    }
    Circle max = Cir[0];
    for (int i = 1; i < n; i++) {
        if (Cir[i] > max) {
            max = Cir[i];
        }
    }
    cout << "\nDuong tron co ban kinh lon nhat: " << endl;
    max.XuatCircle();
    delete[] Cir;
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