#include "SoPhuc.h"
#include <iostream>
using namespace std;

//Hàm nhập
void SoPhuc::NhapSP()
{
	cout << "Nhap phan thuc: ";
	cin >> fThuc;
	cout << "Nhap phan ao: ";
	cin >> fAo;
}
//Hàm xuất
void SoPhuc::XuatSP()
{
	if (fAo < 0)
		cout << fThuc << " " << fAo << endl;
	else
		cout << fThuc << " + " << fAo << endl;
}
//Hàm tổng
SoPhuc SoPhuc::Cong(SoPhuc sp2)
{
	SoPhuc kq;
	kq.fThuc = sp2.fThuc + fThuc;
	kq.fAo = fAo + sp2.fAo;
	return kq;
}
//Hàm hiệu
SoPhuc SoPhuc::Hieu(SoPhuc sp2)
{
	SoPhuc kq;
	kq.fThuc = fThuc + sp2.fThuc;
	kq.fAo = fAo - sp2.fAo;
	return kq;
}
//Hàm tích
SoPhuc SoPhuc::Tich(SoPhuc sp2)
{
	SoPhuc kq;
	kq.fThuc = fThuc*fAo - sp2.fThuc*sp2.fAo;
	kq.fAo = fThuc*sp2.fAo + sp2.fThuc*fAo;
	return kq;
}
//Hàm thương
SoPhuc SoPhuc::Thuong(SoPhuc sp2)
{
	SoPhuc kq;
	kq.fThuc = (fThuc * fAo + sp2.fThuc * sp2.fAo) / (fAo * fAo + sp2.fAo * sp2.fAo);
	kq.fAo = (fAo * sp2.fThuc - fThuc * sp2.fAo) / (fAo * fAo + sp2.fAo * sp2.fAo);
	return kq;
}
//Hàm định giá trị
float SoPhuc::DinhGiaTri()
{
	float GiaTri;
	GiaTri = sqrt(fThuc * fThuc + fAo * fAo);
	return GiaTri;
}