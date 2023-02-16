#include "SoPhuc.h"
//Khởi tạo
SoPhuc::SoPhuc()
{
	fThuc = 1;
	fAo = 1;
}
//Định nghĩa quan điểm số thực
SoPhuc::SoPhuc(float a)
{
	fThuc = a;
	fAo = 0;
}
// ">>"
istream& operator>>(istream& is, SoPhuc& a)
{
	cout << "Nhap phan thuc: ";
	is >> a.fThuc;
	cout << "Nhap phan ao: ";
	is >> a.fAo;
	return is;
}
// "<<"
ostream& operator<<(ostream& os, SoPhuc a)
{
	os << a.fThuc;
	if (a.fAo < 0)
		os << " " << a.fAo << "i";
	else
		os << " + " << a.fAo << "i";
	return os;
}
//Cộng
SoPhuc SoPhuc::operator+(SoPhuc a)
{
	SoPhuc kq;
	kq.fThuc = fThuc + a.fThuc;
	kq.fAo = fAo + a.fAo;
	return kq;
}
//Trừ
SoPhuc SoPhuc::operator-(SoPhuc a)
{
	SoPhuc kq;
	kq.fThuc = fThuc - a.fThuc;
	kq.fAo = fAo - a.fAo;
	return kq;
}
//Nhân
SoPhuc SoPhuc::operator*(SoPhuc a)
{
	SoPhuc kq;
	kq.fThuc = fThuc * a.fThuc - fAo * a.fAo;
	kq.fAo = fThuc * a.fAo * a.fThuc * fAo;
	return kq;
}
//Chia
SoPhuc SoPhuc::operator/(SoPhuc a)
{
	SoPhuc kq;
	kq.fThuc = (fThuc * a.fThuc + fAo * a.fAo) / (fThuc * fThuc + fAo * fAo);
	kq.fAo = (fThuc * a.fAo - a.fThuc * fAo) / (fThuc * fThuc + fAo * fAo);
	return kq;
}
// "=="
bool SoPhuc::operator==(SoPhuc a)
{
	if (fThuc == a.fThuc && fAo == a.fAo)
		return true;
	else
		return false;
}
// "!="
bool SoPhuc::operator!=(SoPhuc a)
{
	if (fThuc != a.fThuc && fAo != a.fAo)
		return true;
	else
		return false;
}
// ">"
bool SoPhuc::operator>(SoPhuc a)
{
	float ss1 = sqrt(fThuc * fThuc + fAo * fAo);
	float ss2 = sqrt(a.fThuc * a.fThuc + a.fAo * a.fAo);
	if (ss1 > ss2)
		return true;
	else
		return false;
}
// ">="
bool SoPhuc::operator>=(SoPhuc a)
{
	float ss1 = sqrt(fThuc * fThuc + fAo * fAo);
	float ss2 = sqrt(a.fThuc * a.fThuc + a.fAo * a.fAo);
	if (ss1 >= ss2)
		return true;
	else
		return false;
}
// "<"
bool SoPhuc::operator<(SoPhuc a)
{
	float ss1 = sqrt(fThuc * fThuc + fAo * fAo);
	float ss2 = sqrt(a.fThuc * a.fThuc + a.fAo * a.fAo);
	if (ss1 < ss2)
		return true;
	else
		return false;
}
// "<="
bool SoPhuc::operator<=(SoPhuc a)
{
	float ss1 = sqrt(fThuc * fThuc + fAo * fAo);
	float ss2 = sqrt(a.fThuc * a.fThuc + a.fAo * a.fAo);
	if (ss1 <= ss2)
		return true;
	else
		return false;
}


