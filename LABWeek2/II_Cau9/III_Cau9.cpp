#include<iostream>
#include<cstdlib>  
#include<windows.h>
using namespace std;
void nhapMang(int* a,int& n){
    for (int i=0;i<n;i++){
        cout << "Nhap phan tu thu a[" << i + 1 << "]=  ";
        cin >> *(a + i);
    }
}
void xuatMang(int* a,int n){

    for (int i=0;i<n;i++){
        cout << *(a+i) << " ";
    }
    cout << endl;
}
void hoanvi(int* x,int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
void SelectionSort(int* a,int n){
    int doicho;
    for (int i=0;i<n-1;i++){
        doicho=i;
        for (int j=i+1;j<n;j++)
            if (a[j]<a[doicho])
                doicho = j;
        hoanvi(&a[doicho],&a[i]);
    }
}
int main(){
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    int* a = new int[n];
    nhapMang(a,n);
    cout << "Mang da nhap la:\n";
    xuatMang(a,n);
    cout << "\n------------------";
    SelectionSort(a, n);
    cout << "\nSap xep mang da cho: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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