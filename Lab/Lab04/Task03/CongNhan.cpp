#include "CongNhan.h"

void CongNhan::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap cong ty: ";
	cin.ignore();
	getline(cin, congty);
	cout << "Nhap nghe: ";
	getline(cin, nghe);
}

void CongNhan::Xuat()
{
	Nguoi::Xuat();
	cout << "Cong ty: " << congty << endl;
	cout << "Nghe: " << nghe << endl;
}