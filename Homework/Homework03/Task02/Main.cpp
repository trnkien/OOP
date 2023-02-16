#include "DanhSachPhanSo.h"
#include "PhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	//Khai báo
	DanhSachPhanSo ListFraction;
	//Nhập danh sách phân số
	ListFraction.NhapDsps();
	//Xuất danh sách phân số
	ListFraction.XuatDsps();
	DanhSachPhanSo SumListFraction;
	//Tính tổng danh sách phân số
	PhanSo tongdsps = ListFraction.CongDsps();
	cout << "Tong cac phan so: ";
	//Xuất danh sách phân số
	tongdsps.XuatPS();
	return 0;
}