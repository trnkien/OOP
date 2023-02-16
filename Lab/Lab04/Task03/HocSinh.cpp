#include "HocSinh.h"

void HocSinh::Nhap()
{
	Nguoi::Nhap();
	cin.ignore();
	cout << "Nhap truong: ";
	getline(cin, truong);
	cout << "Nhap hoc luc: ";
	getline(cin, hocluc);
}

void HocSinh::Xuat()
{
	Nguoi::Xuat();
	cout << "truong: " << truong << endl;
	cout << "hoc luc: " << hocluc << endl;
}