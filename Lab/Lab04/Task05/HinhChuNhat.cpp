#include "HinhChuNhat.h"
#include <iostream>
using namespace std;

HinhChuNhat::HinhChuNhat()
{
	ds[0].x = 1; ds[0].y = 1;
	ds[1].x = 5; ds[1].y = 1;
	ds[2].x = 1; ds[2].y = 4;
	ds[3].x = 5; ds[3].y = 4;
}

HinhChuNhat::HinhChuNhat(Point newds[4])
{
	TuGiac::TuGiac(newds);
}

void HinhChuNhat::Nhap()
{
	TuGiac::Nhap();
	while (this->CheckHinhChuNhat() == false)
	{
		cout << "Khong phai hinh chu nhat ! Nhap lai: ";
		TuGiac::Nhap();
	}
}

void HinhChuNhat::Xuat()
{
	BinhHanh::Xuat();
}

Point* HinhChuNhat::GetPoint()
{
	return ds;
}

void HinhChuNhat::Set()
{
	cout << "========= UPDATE =========" << endl;
	Point c[4];
	do
	{
		for (int i = 0; i < 4; i++)
		{
			cout << i + 1 << " (x,y): ";
			cout << "Nhap hoanh do: ";
			cin >> c[i].x;
			cout << "Nhap tung do: ";
			cin >> c[i].y;
		}
		SetPoint(c);
	} while (this->CheckHinhChuNhat() == false);
}

bool HinhChuNhat::CheckHinhChuNhat()
{
	if (BinhHanh::CheckBinhHanh() == false)
		return false;
	int dem = 0;
	for (int i = 0; i < 3; i++)
		for (int j = i + 1; j < 4; j++)
			if (ds[i].x == ds[j].x)
				dem++;
	if (dem != 2)
		return false;
	else return true;
}