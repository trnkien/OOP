#include "CString.h"

CString::CString()
{

}

istream& operator>>(istream& is, CString& a)
{
	cout << "Nhap chuoi: ";
	getline(is, a.s);
	return is;
}

ostream& operator<<(ostream& os, CString a)
{
	os << a.s;
	return os;
}

CString CString::operator+(CString a)
{
	CString kq;
	kq.s = s;
	kq.s += a.s;
	return kq;
}

void CString::operator=(CString a)
{
	s = a.s;
}

bool CString::operator==(CString a)
{
	if (s == a.s)
		return true;
	return false;
}

bool CString::operator!=(CString a)
{
	if (s != a.s)
		return true;
	return false;
}

bool CString::operator<(CString a)
{
	if (s < a.s)
		return true;
	return false;
}

bool CString::operator<=(CString a)
{
	if (s <= a.s)
		return true;
	return false;
}

bool CString::operator>(CString a)
{
	if (s > a.s)
		return true;
	return false;
}

bool CString::operator>=(CString a)
{
	if (s >= a.s)
		return true;
	else
		return false;
}

