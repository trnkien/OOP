#include "HinhThang.h"
#include <iostream>

bool HinhThang::CheckHinhThang()
{
	if(TuGiac::Check()==false)
		return false;
	int dem = 0;
	for (int i = 0; i < 3; i++)
		for (int j = i + 1; j < 4; j++)
			if (ds[i].y == ds[j].y)
				dem++;
	if (dem != 2)
		return false;
	return true;
}

HinhThang::HinhThang()
{
	ds[0].x = 1; ds[0].y = 1;
	ds[1].x = 5; ds[1].y = 1;
	ds[2].x = 2; ds[2].y = 3;
	ds[3].x = 6; ds[3].y = 3;
}

HinhThang::HinhThang(Point newds[4])
{
	TuGiac::TuGiac(newds);
}

void HinhThang::Set()
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
	} while (this->CheckHinhThang() == false);
}

void HinhThang::Nhap()
{
	TuGiac::Nhap();
	while (this->CheckHinhThang() == false)
	{
		cout << "Khong phai hinh thang ! Nhap lai: " << endl;
		TuGiac::Nhap();
	}
}

void HinhThang::Xuat()
{
	TuGiac::Xuat();
}

Point* HinhThang::Getds()
{
	return ds;
}