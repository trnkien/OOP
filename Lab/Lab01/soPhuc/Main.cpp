#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main()
{
	//Khai báo
	SoPhuc a, b, tong, hieu, tich, thuong;
	float giatria, giatrib;
	//Nhập
	a.NhapSP();
	b.NhapSP();
	//Tổng
	tong = a.Cong(b);
	cout << "Tong = ";
	tong.XuatSP();
	//Hiệu
	hieu = a.Hieu(b);
	cout << "Hieu = ";
	hieu.XuatSP();
	//Tích
	tich = a.Tich(b);
	cout << "Tich = ";
	tich.XuatSP();
	//Thương
	thuong = a.Thuong(b);
	cout << "Thuong = ";
	thuong.XuatSP();
	//Giá trị
	giatria = a.DinhGiaTri();
	cout << "Gia tri a = " << giatria << endl;
	giatrib = b.DinhGiaTri();
	cout << "Gia tri b = " << giatrib << endl;
}