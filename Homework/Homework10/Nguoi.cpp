#include "Nguoi.h"
#include <iostream>

void Nguoi::Nhap()
{
	cout << "Nhap ten: ";
	cin.ignore();
	getline(cin, Hoten);
}

void Nguoi::Xuat()
{
	cout << "Ten: " << Hoten << endl;
}