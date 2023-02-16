#include "Nguoi.h"

void Nguoi::Nhap()
{
	cin.ignore();
	cout << "Nhap ten: ";
	getline(cin, Hoten);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
}

void Nguoi::Xuat()
{
	cout << "ten: " << Hoten << endl;
	cout << "tuoi: " << tuoi << endl;
}