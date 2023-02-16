#include "Nhanvienvanphong.h"

void Nhanvienvanphong::Nhap()
{
	Nguoi::Nhap();
}

void Nhanvienvanphong::Xuat()
{
	cout << "Nhan vien van phong: " << endl;
	Nguoi::Xuat();
}

void Nhanvienvanphong::SetSongaylamviec(int a)
{
	songaylamviec = a;
}

void Nhanvienvanphong::TinhLuong()
{
	Luong = songaylamviec * 100000;
}

int Nhanvienvanphong::GetLuong()
{
	return Luong;
}