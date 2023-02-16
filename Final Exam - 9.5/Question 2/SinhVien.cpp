#include "SinhVien.h"

void SinhVien::Nhap()
{
	ConNguoi::Nhap();
	cout << "Gioi tinh: 1. Nam / 2. Nu: ";
	cin >> GioiTinh;
	while (GioiTinh < 1 || GioiTinh > 2)
	{
		cout << "Nhap lai: ";
		cin >> GioiTinh;
	}
	cout << "Nhap diem OOP: ";
	cin >> DiemOOP;
	cout << "Nhap diem Nhap mon lap trinh: ";
	cin >> DiemNmlt;
	cout << "Nhap diem Cau truc du lieu: ";
	cin >> DiemCtdl;
	cout << endl;
}

void SinhVien::Xuat()
{
	ConNguoi::Xuat();
	cout << endl;
	cout << "Diem OOP: " << DiemOOP << endl;
	cout << "Diem Nhap mon lap trinh: " << DiemNmlt << endl;
	cout << "Diem Cau truc du lieu: " << DiemCtdl << endl;
}

int SinhVien::GetGioiTinh()
{
	return GioiTinh;
}

float SinhVien::TinhDiemTrungBinh()
{
	return (DiemCtdl + DiemNmlt + DiemOOP) / 3;
}