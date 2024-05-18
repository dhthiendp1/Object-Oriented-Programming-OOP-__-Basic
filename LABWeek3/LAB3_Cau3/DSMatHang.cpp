#include "DSMatHang.h"
#include <iostream>
DSMatHang::DSMatHang(int size) {
    n = size;
    ds = new MatHang* [size]; // Cấp phát mảng con trỏ
    for (int i = 0; i < size; ++i) {
        ds[i] = nullptr; // Khởi tạo các phần tử là nullptr
    }
}

DSMatHang::~DSMatHang() {
    for (int i = 0; i < n; ++i) {
        delete ds[i]; // Giải phóng bộ nhớ cho từng đối tượng
    }
    delete[] ds; // Giải phóng bộ nhớ cho mảng con trỏ
}

void DSMatHang::NhapDS() {
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap may thu " << i + 1 << endl;
        char choice;
        cout << "\nNhap 1 cho May Tinh, 2 Cho may in, hoac 0 de thoat: ";
        cin >> choice;
        switch (choice) {
        case '1': {
            MayTinh* namepc = new MayTinh();
            namepc->NhapMatHang();
            namepc->Set_LoaiMay(true);
            ds[i] = namepc;
            break;
        }
        case '2': {
            MayIn* printer = new MayIn(); 
            printer->NhapMatHang();
            printer->Set_LoaiMay(false);
            ds[i] = printer;
            break;
        }
        case '0': {
            return;
        }
        default: {
            cout << "\nLua chon khong hop le!" << endl;
            --i; // Quay lại lặp lại vòng lặp để nhập lại
        }
        }
        cout << "\n------------------";
    }
}
void DSMatHang::XuatDS() //Xuất thông tin tất cả các đối tượng trong danh sách
{
    for (int i = 0; i < n; ++i) {
        if (ds[i] != nullptr) {
            if (ds[i]->Get_LoaiSMay() == true) {
                cout << "\nThong tin may tinh thu " << i + 1 << endl;
                ds[i]->XuatMatHang();
                ds[i]->displayLoaiMatHang();
            }
            else {
                cout << "\nThong tin may in thu " << i + 1 << endl;
                ds[i]->XuatMatHang();
                ds[i]->displayLoaiMatHang();
            }
            cout << "\n----------------";
        }
    }
}