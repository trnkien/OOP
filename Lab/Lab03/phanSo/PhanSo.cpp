#include "PhanSo.h"

int uscln(int a, int b)
{
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

PhanSo::PhanSo()
{
	iTu = 0;
	iMau = 1;
}

PhanSo::PhanSo(int a)
{
	iTu = a;
	iMau = 1;
}

istream& operator>>(istream& is, PhanSo& a)
{
	cout << "Nhap tu so: ";
	is >> a.iTu;
	cout << "Nhap mau so: ";
	is >> a.iMau;
	return is;
}

ostream& operator<<(ostream& os, PhanSo a)
{
	os << a.iTu << "/" << a.iMau;
	return os;
}

void PhanSo::RutGon()
{
	int usc = uscln(iTu, iMau);
	iTu /= usc;
	iMau /= usc;
}

PhanSo PhanSo::operator+(PhanSo a)
{
	PhanSo kq;
	kq.iTu = iTu * a.iMau + a.iTu * iMau;
	kq.iMau = iMau * a.iMau;
	kq.RutGon();
	return kq;
}

PhanSo PhanSo::operator-(PhanSo a)
{
	PhanSo kq;
	kq.iTu = iTu * a.iMau - iMau * a.iTu;
	kq.iMau = a.iMau * iMau;
	kq.RutGon();
	return kq;
}

PhanSo PhanSo::operator*(PhanSo a)
{
	PhanSo kq;
	kq.iTu = iTu * a.iTu;
	kq.iMau = iMau * a.iMau;
	kq.RutGon();
	return kq;
}

PhanSo PhanSo::operator/(PhanSo a)
{
	PhanSo kq;
	kq.iTu = iTu * a.iMau;
	kq.iMau = iMau * a.iTu;
	kq.RutGon();
	return kq;
}

bool PhanSo::operator<(PhanSo a)
{
	float ss1 = (float)iTu / iMau;
	float ss2 = (float)a.iTu / a.iMau;
	if (ss1 < ss2)
		return true;
	else
		return false;
}

bool PhanSo::operator<=(PhanSo a)
{
	float ss1 = (float)iTu / iMau;
	float ss2 = (float)a.iTu / a.iMau;
	if (ss1 <= ss2)
		return true;
	else
		return false;
}

bool PhanSo::operator>(PhanSo a)
{
	float ss1 = (float)iTu / iMau;
	float ss2 = (float)a.iTu / a.iMau;
	if (ss1 > ss2)
		return true;
	else
		return false;
}

bool PhanSo::operator>=(PhanSo a)
{
	float ss1 = (float)iTu / iMau;
	float ss2 = (float)a.iTu / a.iMau;
	if (ss1 >= ss2)
		return true;
	else
		return false;
}

bool PhanSo::operator==(PhanSo a)
{
	float ss1 = (float)iTu / iMau;
	float ss2 = (float)a.iTu / a.iMau;
	if (ss1 == ss2)
		return true;
	else
		return false;
}

bool PhanSo::operator!=(PhanSo a)
{
	float ss1 = (float)iTu / iMau;
	float ss2 = (float)a.iTu / a.iMau;
	if (ss1 != ss2)
		return true;
	else
		return false;
}