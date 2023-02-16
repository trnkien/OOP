#include "PhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	//Khai báo
	PhanSo a, b, tong, hieu, tich, thuong;
	float giatria, giatrib;
	//Nhập
	a.NhapPS();
	b.NhapPS();
	//Tổng
	tong = a.Tong(b);
	cout << "Tong = ";
	tong.XuatPS();
	//Hiệu
	hieu = a.Hieu(b);
	cout << "Hieu = ";
	hieu.XuatPS();
	//Tích
	tich = a.Tich(b);
	cout << "Tich = ";
	tich.XuatPS();
	//Thương
	thuong = a.Thuong(b);
	cout << "Thuong = ";
	thuong.XuatPS();
	//Giá trị của phân số a
	giatria = a.DinhGiaTri();
	cout << "Gia tri cua a =" << giatria;
	//Giá trị của phân số b
	giatrib = b.DinhGiaTri();
	cout << "Gia tri cua b =" << giatrib;
	return 0;
}