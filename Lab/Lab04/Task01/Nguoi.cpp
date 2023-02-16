#include "Nguoi.h"

void Nguoi::Nhap()
{
	cout << "Nhap ten nhan vien: ";
	cin.ignore();
	getline(cin, Hoten);
	cin >> Birth;
}

void Nguoi::Xuat()
{
	cout << "ten: " << Hoten << endl;
	cout << Birth << endl;
}

string Nguoi::GetTen()
{
	return Hoten;
}
