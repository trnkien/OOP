#include "SoPhuc.h"
#include <iostream>
using namespace std;

//Khởi tạo.
SoPhuc::SoPhuc()
{
	fThuc = 1;
	fAo = 1;
}
SoPhuc::SoPhuc(float newThuc, float newAo)
{
	fThuc = newThuc;
	fAo = newAo;
}
//Nhập, xuất.
void SoPhuc::NhapSP()
{
	cout << "Nhap phan thuc: ";
	cin >> fThuc;
	cout << "Nhap phan ao: ";
	cin >> fAo;
}
void SoPhuc::XuatSP()
{
	if (fAo < 0)
		cout << fThuc << "s " << fAo << "i" << endl;
	else
		cout << fThuc << " + " << fAo << "i" << endl;
}
//Phép toán
SoPhuc SoPhuc::operator+(SoPhuc sp2)
{
	SoPhuc kq;
	kq.fThuc = sp2.fThuc + fThuc;
	kq.fAo = fAo + sp2.fAo;
	return kq;
}
SoPhuc SoPhuc::operator-(SoPhuc sp2)
{
	SoPhuc kq;
	kq.fThuc = fThuc + sp2.fThuc;
	kq.fAo = fAo - sp2.fAo;
	return kq;
}
SoPhuc SoPhuc::operator+(int b)
{
	SoPhuc kq;
	kq.fThuc = b + fThuc;
	kq.fAo = fAo;
	return kq;
}
//So sánh.
bool SoPhuc::operator>=(SoPhuc sp2)
{
	if (fThuc >= sp2.fThuc && fAo >= sp2.fAo)
		return true;
	return false;
}
bool SoPhuc::operator<=(SoPhuc sp2)
{
	if (fThuc <= sp2.fThuc && fAo <= sp2.fAo)
		return true;
	return false;
}
//Ép kiểu.
SoPhuc::SoPhuc(int t)
{
	fThuc = (float)t;
	fAo = 0;
}
//Định giá trị.
float SoPhuc::DinhGiaTri()
{
	float GiaTri;
	GiaTri = sqrt(fThuc * fThuc + fAo * fAo);
	return GiaTri;
}
//Truy vấn.
float SoPhuc::GetThuc()
{
	return fThuc;
}
float SoPhuc::GetAo()
{
	return fAo;
}
//Cập nhật.
void SoPhuc::SetThuc(float newThuc)
{
	fThuc = newThuc;
}
void SoPhuc::SetAo(float newAo)
{
	fAo = newAo;
}
void SoPhuc::SetSP(float newAo, float newThuc)
{
	fThuc = newThuc;
	fAo = newAo;
}
//Sao chép.
void SoPhuc::Copy(SoPhuc& c)
{
	fThuc = c.fThuc;
	fAo = c.fAo;
}
