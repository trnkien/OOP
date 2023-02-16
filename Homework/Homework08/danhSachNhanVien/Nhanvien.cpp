#include "Nhanvien.h"
#include <iostream>

istream& operator>>(istream& is, Nhanvien& a)
{
	cin.ignore();
	cout << "Nhap ho ten: ";
	is >> a.Hoten;
	cout << "Nhap ngay thang nam sinh: " << endl;
	is >> a.birth;
	cout << "Nhap gioi tinh (Nam/ Nu): ";
	is >> a.Gender;
	cout << "Nhap chuc vu (1. Ban quan ly/ 2. Nhan vien san xuat): ";
	is >> a.Job;
	if (a.Job == 2)
	{
		cout << "Nhap san pham nhan vien lam duoc trong 1 thang: ";
		cin >> a.sp;
	}
	return is;
}
ostream& operator<<(ostream& os, Nhanvien a)
{
	cout << "Ho ten: ";
	os << a.Hoten;
	cout << endl;
	os << a.birth;
	cout << "Gioi tinh: ";
	os << a.Gender;
	cout << endl;
	cout << "Chuc vu: ";
	if (a.Job == 1)
		cout << "Ban quan ly." << endl;
	else
		cout << "Nhan vien san xuat." << endl;
	return os;
}