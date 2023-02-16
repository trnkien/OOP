#include "TamGiac.h"
#include <iostream>
using namespace std;

//Khởi tạo.
TamGiac::TamGiac()
{
	a.Set_xy(5, 9);
	b.Set_xy(2, 4);
	c.Set_xy(8, 2);
}
TamGiac::TamGiac(Diem newa, Diem newb, Diem newc)
{
	if (CheckTamGiac(a, b, c) == false)
	{
		cout << "Tam giac khong ton tai !" << endl;
		cout << "He thong se tu tao tam giac" << endl;
		a.Set_xy(5, 9);
		b.Set_xy(2, 4);
		c.Set_xy(8, 2);
	}
	else
	{
		a = newa;
		b = newb;
		c = newc;
	}
}
//Nhập.
void TamGiac::Nhap()
{
	cout << "Nhap diem thu 1:" << endl;
	a.Nhap();
	cout << "Nhap diem thu 2: " << endl;
	b.Nhap();
	cout << "Nhap diem thu 3: " << endl;
	c.Nhap();
	while (CheckTamGiac(a,b,c) == false)
	{
		cout << "Tam giac khong ton tai! Nhap lai: ";
		Nhap();
	}
}
//Module véc-tơ 2 điểm
float TamGiac::Module(Diem a, Diem b)
{
	Diem c;
	c.x = b.x - a.x;
	c.y = b.y - a.y;
	float kq = sqrt(c.x * c.x + c.y * c.y);
	return kq;
}
//Điều kiện tồn tại của tam giác.
bool TamGiac::CheckTamGiac(Diem a, Diem b, Diem c)
{
	//Kiểm tra thẳng hàng.
	if (a.x == b.x && a.x == c.x)
		return false;
	if (a.y == b.y && a.y == c.y)
		return false;
	//Kiểm tra (AB + AC < BC)
	if (Module(a, b) + Module(a, c) < Module(b, c))
		return false;
	//(AC + BC < AB)
	if (Module(a, c) + Module(b, c) < Module(a, b))
		return false;
	//(BC + AB < AC)
	if (Module(b, c) + Module(a, b) < Module(a, c))
		return false;
	return true;
}
//Xuất.
void TamGiac::Xuat()
{
	cout << "Dinh thu 1: ";
	a.Xuat();
	cout << "Dinh thu 2: ";
	b.Xuat();
	cout << "Dinh thu 3: ";
	c.Xuat();
}
//Truy vấn.
Diem TamGiac::Get_a()
{
	return a;
}
Diem TamGiac::Get_b()
{
	return b;
}
Diem TamGiac::Get_c()
{
	return c;
}
//Cập nhật.
void TamGiac::Set_a(Diem newa)
{
	a = newa;
}
void TamGiac::Set_b(Diem newb)
{
	b = newb;
}
void TamGiac::Set_c(Diem newc)
{
	c = newc;
}
void TamGiac::Set_abc(Diem newa, Diem newb, Diem newc)
{
	a = newa;
	b = newb;
	c = newc;
}
//Sao chép.
TamGiac::TamGiac(TamGiac& d)
{
	a = d.a;
	b = d.b;
	c = d.c;
}
//Tịnh tiến.
void TamGiac::TinhTien(float l, float k)
{
	a.TinhTien(l, k);
	b.TinhTien(l, k);
	c.TinhTien(l, k);
}
//Quay
void TamGiac::Quay(float d)
{
	a.Quay(d);
	b.Quay(d);
	c.Quay(d);
}
//Phóng to.
void TamGiac::PhongTo(float k)
{
	if (k == 0)
		return;
	a.Set_xy(a.x * k, a.y * k);
	b.Set_xy(a.x * k, b.y * k);
	c.Set_xy(a.x * k, b.y * k);
}
//Thu Nhỏ.
void TamGiac::ThuNho(float k)
{
	if (k == 0)
		return;
	a.Set_xy(a.x / k, a.y / k);
	b.Set_xy(b.x / k, b.y / k);
	c.Set_xy(c.x / k, c.y / k);
		
}
//Hủy.
TamGiac::~TamGiac()
{

}
