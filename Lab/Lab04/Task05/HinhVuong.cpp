#include "HinhVuong.h"
#include <iostream>
using namespace std;

HinhVuong::HinhVuong()
{
	ds[0].x = 1; ds[0].y = 1;
	ds[1].x = 5; ds[1].y = 1;
	ds[2].x = 5; ds[2].y = 5;
	ds[3].x = 1; ds[3].y = 5;
}

HinhVuong::HinhVuong(Point newds[4])
{
	TuGiac::TuGiac();
}

void HinhVuong::Nhap()
{
	TuGiac::Nhap();
	while (this->CheckHinhVuong() == false)
	{
		cout << "Khong phai hinh vuong ! Nhap lai: " << endl;
		TuGiac::Nhap();
	}
}

void HinhVuong::Xuat()
{
	TuGiac::Xuat();
}

bool HinhVuong::CheckHinhVuong()
{
	double arr[2];
	int b = 0;
	if (HinhChuNhat::CheckHinhChuNhat() == false)
		return false;
	for (int i = 1; i < 3; i++)
	{
		arr[0] = Module(ds[i], ds[i + 1]);
		arr[1] = Module(ds[i], ds[i - 1]);
		if (arr[0] != arr[1])
		{
			return false;
		}
	}
	return true;
}

