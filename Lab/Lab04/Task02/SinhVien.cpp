#include "SinhVien.h"

void SinhVien::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap ma so sinh vien: ";
	cin >> mssv;
	cin.ignore();
	cout << "Nhap truong hoc: ";
	getline(cin, truong);
	cout << "Nhap nganh hoc: ";
	getline(cin, nganh);
}

void SinhVien::Xuat()
{
	Nguoi::Xuat();
	cout << "Ma so sinh vien: " << mssv << endl;
	cout << "Truong: " << truong << endl;
	cout << "Nganh: " << nganh << endl;
}
