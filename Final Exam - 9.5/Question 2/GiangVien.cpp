#include "GiangVien.h"

void GiangVien::Nhap()
{
	ConNguoi::Nhap();
	cout << "Nhap so tiet day: ";
	cin >> SoTietDay;
}

void GiangVien::Xuat()
{
	ConNguoi::Xuat();
	cout << endl;
	cout << "So tiet day: " << SoTietDay;
}

int GiangVien::GetSoTiet()
{
	return SoTietDay;
}
