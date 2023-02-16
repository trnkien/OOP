#include "BinhHanh.h"
#include <iostream>
using namespace std;

BinhHanh::BinhHanh()
{
	ds[0].x = 1; ds[0].y = 1;
	ds[1].x = 5; ds[1].y = 1;
	ds[2].x = 2; ds[2].y = 5;
	ds[3].x = 6; ds[3].y = 5;
}

BinhHanh::BinhHanh(Point newds[4])
{
	TuGiac::TuGiac(newds);
}

void BinhHanh::Nhap()
{
	TuGiac::Nhap();
	while (this->CheckBinhHanh() == false)
	{
		cout << "Khong phai hinh binh hanh ! Nhap lai: " << endl;
		TuGiac::Nhap();
	}
}

void BinhHanh::Xuat()
{
	HinhThang::Xuat();
}

Point* BinhHanh::GetPoint()
{
	return ds;
}

void BinhHanh::Set()
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
	} while (this->CheckBinhHanh() == false);
}

bool BinhHanh::CheckBinhHanh()
{
	double a[2];
	int b = 0;
	if (HinhThang::CheckHinhThang() == false)
		return false;
	for (int i = 0; i < 3; i++)
		for (int j = i + 1; j < 4; j++)
		{
			if (ds[i].y == ds[j].y)
			{
				a[b] = Module(ds[i], ds[j]);
				b++;
			}
			break;
		}
	if (a[0] != a[1])
		return false;
	else return true;
}