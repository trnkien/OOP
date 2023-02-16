#include "PhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	PhanSo a, b, tong, hieu, tich, thuong;
	a.NhapPS();
	b.NhapPS();
	//Tổng
	tong = a.CongPS(b);
	tong.Rutgon();
	cout << "Tong = ";
	tong.XuatPS();
	//Hiệu
	hieu = a.TruPS(b);
	hieu.Rutgon();
	cout << "Hieu = ";
	hieu.XuatPS();
	//Tích
	tich = a.NhanPS(b);
	tich.Rutgon();
	cout << "Tich = ";
	tich.XuatPS();
	//Thương
	thuong = a.ChiaPS(b);
	thuong.Rutgon();
	cout << "Thuong = ";
	thuong.XuatPS();
	return 0;
}