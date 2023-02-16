#include "DanhSachPhanSo.h"
#include <iostream>
using namespace std;
//Nhập phân số
void DanhSachPhanSo::NhapDsps()
{
	do
	{
		cout << "Nhap so luong phan so: ";
		cin >> soluong;
		if (soluong < 0)
		{
			cout << "So luong > 0. Nhap lai: ";
			cin >> soluong;
		}
	} while (soluong < 0);
	Dsps = new PhanSo[soluong];
	for (int i = 0; i < soluong; i++)
		Dsps[i].NhapPS();
}
//Xuất phân số
void DanhSachPhanSo::XuatDsps()
{
	for (int i = 0; i < soluong; i++)
		Dsps[i].XuatPS();
}
//Cộng tất cả các phân số
PhanSo DanhSachPhanSo::CongDsps()
{
	tongdsps.KhoiTaoTong();
	for (int i = 0; i < soluong; i++)
		tongdsps = tongdsps.CongPS(Dsps[i]);
	return tongdsps;
}
