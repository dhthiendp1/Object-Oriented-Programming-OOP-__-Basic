#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void chanle(int n, int& a, int& b) {

    while (n>0) {
        int dem = n % 10;
        if (dem % 2 == 0)
            a++;
        else
            b++;
        n/= 10;
    }
}
int main() {
    int n;
    int a = 0, b = 0;
    cout << "nhap so n (0 < n <= 99999): ";
    cin >> n;
    if (n <= 0 || n > 99999) {
        cout << "So n khong hop le!" << endl;
        return 1;
    }
    else
    {
       chanle(n, a, b);
       cout << "Co : " << a << " so chan. " << endl;
       cout << "Co : " << b << " so le. " << endl;
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

}
