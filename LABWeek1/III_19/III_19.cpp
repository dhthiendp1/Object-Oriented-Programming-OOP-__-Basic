#include<iostream>
#include<cstdlib>
#include<Windows.h>
using namespace std;
void nhap(int& n) {
    do {
        cout << "Nhap so nguyen duong n co 4 chu so: ";
        cin >> n;
    } while (n < 1000 || n > 9999);
}
int kiemtrasomax(int n) {
    int max = n % 10;
    n /= 10;
    while (n > 0) {
        int chuSo = n % 10;
        if (chuSo > max) {
            max = chuSo;
        }
        n /= 10;
    }
    return max;
}

int main() {
    int n;
    nhap(n);
    int socantim = kiemtrasomax(n);
    cout << "Chu so lon nhat cua " << n << " la: " << socantim << endl;
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
