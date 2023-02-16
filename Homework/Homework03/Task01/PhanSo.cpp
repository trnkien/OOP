#include "PhanSo.h"
#include <iostream>>
using namespace std;

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
			cout << "Mau > 0. Nhap lai: ";
			cin >> iMau;
		}
	} while (iMau == 0);
	if (iMau < 0)
	{
		iMau *= -1;
		iTu *= -1;
	}
}
void PhanSo::XuatPS()
{
	cout << iTu << "/" << iMau << endl;
}
PhanSo PhanSo::CongPS(PhanSo ps2)
{
	PhanSo tong;
	tong.iTu = iTu * ps2.iMau + iMau * ps2.iTu;
	tong.iMau = iMau * ps2.iMau;
	return tong;
}
PhanSo PhanSo::TruPS(PhanSo ps2)
{
	PhanSo hieu;
	hieu.iTu = iTu * ps2.iMau - iMau * ps2.iTu;
	hieu.iMau = iMau * ps2.iMau;
	return hieu;
}
PhanSo PhanSo::NhanPS(PhanSo ps2)
{
	PhanSo tich;
	tich.iTu = iTu * ps2.iTu;
	tich.iMau = iMau * ps2.iMau;
	return tich;
}
PhanSo PhanSo::ChiaPS(PhanSo ps2)
{
	PhanSo thuong;
	thuong.iTu = iTu * ps2.iMau;
	thuong.iMau = iMau * ps2.iTu;
	return thuong;
}
void PhanSo::Rutgon()
{
	int usc = uscln(iTu, iMau);
	iTu = iTu / usc;
	iMau = iMau / usc;
}
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
