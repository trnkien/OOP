#include "NguoiLon.h"
#include <iostream>

void NguoiLon::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap so cmnd: ";
	cin >> cmnd;
}

void NguoiLon::Xuat()
{
	Nguoi::Xuat();
	cout << "Tuoi: " << Tuoi << endl;
	cout << "cmnd: " << cmnd << endl;
}