#include "DaGiac.h"
#include <iostream>
using namespace std;

//Khởi tạo.
DaGiac::DaGiac()
{
	n = 4;
	arrDiem = new Diem[n];
	arrDiem[0].Set_xy(3, 4);
	arrDiem[1].Set_xy(6, 7);
	arrDiem[2].Set_xy(10, 6);
	arrDiem[3].Set_xy(18, 3);
}
DaGiac::DaGiac(int newn, Diem newarr[])
{
	n = newn;
	arrDiem = new Diem[n];
	for (int i = 0; i < n; i++)
	{
		arrDiem[i].x = newarr[i].x;
		arrDiem[i].y = newarr[i].y;
	}
}
//Nhập.
void DaGiac::Nhap()
{
	cout << "Nhap so luong dinh da giac:" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap dinh thu" << i + 1 << ": " << endl;
		arrDiem[i].Nhap();
	}
}
//Xuất.
void DaGiac::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Dinh thu " << i + 1 << ": ";
		arrDiem[i].Xuat();
	}
}
//Truy vấn.
int DaGiac::Get_n()
{
	return n;
}
DaGiac DaGiac::Get_arr()
{
	DaGiac tv;
	tv.n = n;
	tv.arrDiem = new Diem[tv.n];
	for (int i = 0; i < tv.n; i++)
	{
		tv.arrDiem[i].x = arrDiem[i].x;
		tv.arrDiem[i].y = arrDiem[i].y;
	}
	return tv;
}
//Cập nhật.
void DaGiac::Set_n(int newn)
{
	n = newn;
}
void DaGiac::Set_arr(Diem newarr[])
{
	arrDiem = new Diem[n];
	for (int i = 0; i < n; i++)
	{
		arrDiem[i].x = newarr[i].x;
		arrDiem[i].y = newarr[i].y;
	}
}
void DaGiac::Set_DaGiac(DaGiac& a)
{
	n = a.n;
	arrDiem = new Diem[n];
	for (int i = 0; i < n; i++)
	{
		arrDiem[i].x = a.arrDiem[i].x;
		arrDiem[i].y = a.arrDiem[i].y;
	}
}
//Sao chép.
DaGiac::DaGiac(DaGiac& a)
{
	n = a.n;
	arrDiem = new Diem[n];
	for (int i = 0; i < n; i++)
	{
		arrDiem[i].x = a.arrDiem[i].x;
		arrDiem[i].y = a.arrDiem[i].y;
	}
}
//Tịnh tiến.
void DaGiac::TinhTien(float a, float b)
{
	for (int i = 0; i < n; i++)
		arrDiem[i].TinhTien(a, b);
}
//Phóng to.
void DaGiac::PhongTo(float k)
{
	if (k == 0)
		return;
	for (int i = 0; i < n; i++)
	{
		arrDiem[i].x*= k;
		arrDiem[i].y*= k;
	}
}
//Thu nhỏ.
void DaGiac::ThuNho(float k)
{
	if (k == 0)
		return;
	for (int i = 0; i < n; i++)
	{
		arrDiem[i].x/= k;
		arrDiem[i].y/= k;
	}
}
//Quay.
void DaGiac::Quay(float a)
{
	for (int i = 0; i < n; i++)
	{
		arrDiem[i].Quay(a);
		arrDiem[i].Quay(a);
	}
}
DaGiac::~DaGiac()
{

}