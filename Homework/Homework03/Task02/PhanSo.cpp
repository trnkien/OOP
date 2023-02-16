#include "PhanSo.h"
#include <iostream>
using namespace std;
//Hàm ước số chung
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
//Hàm nhập phân số
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
}
//Hàm xuất phân số
void PhanSo::XuatPS()
{
	cout << iTu << "/" << iMau << "     ";
}
//Hàm rút gọn
void PhanSo::Rutgon()
{
	int usc = uscln(iTu, iMau);
	iTu /= usc;
	iMau /= usc;
}
//Cộng phân số
PhanSo PhanSo::CongPS(PhanSo ps2)
{
	PhanSo tong;
	tong.iTu = iTu * ps2.iMau + iMau * ps2.iTu;
	tong.iMau = iMau * ps2.iMau;
	return tong;
}
void PhanSo::KhoiTaoTong()
{
	iTu = 0;
	iMau = 1;
}