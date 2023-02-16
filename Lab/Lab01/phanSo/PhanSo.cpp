#include "PhanSo.h"
#include <iostream>
using namespace std;
//Hàm nhập
void PhanSo::NhapPS()
{
	cout << "Nhap tu so: ";
	cin >> iTu;
	do
	{
		cout << "Nhap mau so: ";
		cin >> iMau;
		if (iMau == 0)
		{
			cout << "Mau so khac 0. Nhap lai: ";
			cin >> iMau;
		}
	} while (iMau == 0);
	if (iMau < 0)
	{
		iMau *= -1;
		iTu *= -1;
	}
}
//Hàm xuất
void PhanSo::XuatPS()
{
	cout << iTu << "/" << iMau << endl;
}
//Hàm tổng
PhanSo PhanSo::Tong(PhanSo ps2)
{
	PhanSo kq;
	kq.iTu = iTu * ps2.iMau + iMau * ps2.iTu;
	kq.iMau = iMau * ps2.iMau;
	kq.RutGon();
	return kq;
}
//Hàm hiệu
PhanSo PhanSo::Hieu(PhanSo ps2)
{
	PhanSo kq;
	kq.iTu = iTu * ps2.iMau - iMau * ps2.iTu;
	kq.iMau = iMau * ps2.iMau;
	kq.RutGon();
	return kq;
}
//Hàm tích
PhanSo PhanSo::Tich(PhanSo ps2)
{
	PhanSo kq;
	kq.iTu = iTu * ps2.iTu;
	kq.iMau = iMau * ps2.iMau;
	kq.RutGon();
	return kq;
}
//Hàm thương
PhanSo PhanSo::Thuong(PhanSo ps2)
{
	PhanSo kq;
	kq.iTu = iTu * ps2.iMau;
	kq.iMau = iMau * ps2.iTu;
	kq.RutGon();
	return kq;
}
//Hàm định giá trị
float PhanSo::DinhGiaTri()
{
	float GiaTri;
	GiaTri = (float)iTu / iMau;
	return GiaTri;
}
//Hàm rút gọn
void PhanSo::RutGon()
{
	int usc = uscln(iTu, iMau);
	iTu /= usc;
	iMau /= usc;
}
//Hàm tìm uscln
int uscln(int a, int b)
{
	if (a < 0)
		a *= -1;
	if (b < 0)
		b *= -1;
	if (a == b)
		return a;
	else
	{
		if (a > b)
			return uscln(a - b, b);
		else
			return uscln(a, b - a);
	}
}
