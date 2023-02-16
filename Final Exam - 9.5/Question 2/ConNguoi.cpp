#include "ConNguoi.h"

ConNguoi::ConNguoi()
{
	HoTen = "No Name";
}

ConNguoi::~ConNguoi()
{

}

void ConNguoi::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, HoTen);
}

void ConNguoi::Xuat()
{
	cout << "Ten: " << HoTen;
}

int ConNguoi::GetLoai()
{
	return Loai;
}

void ConNguoi::SetLoai(int newLoai)
{
	Loai = newLoai;
}