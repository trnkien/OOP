#include "Nhanviensanxuat.h"

void Nhanviensanxuat::Nhap()
{
	Nguoi::Nhap();
}

void Nhanviensanxuat::Xuat()
{
	cout << "Nhan vien san xuat. " << endl;
	Nguoi::Xuat();
}

void Nhanviensanxuat::SetLuongcanban(int a)
{
	Luongcanban = a;
}

void Nhanviensanxuat::SetSosp(int a)
{
	SoSp = a;
}

void Nhanviensanxuat::TinhLuong()
{
	Luong = Luongcanban + SoSp * 5000;
}

int Nhanviensanxuat::GetLuong()
{
	return Luong;
}