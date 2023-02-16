#pragma once
#include "BinhHanh.h"
class HinhChuNhat:public BinhHanh
{
protected:
	bool CheckHinhChuNhat();
public:
	HinhChuNhat();
	HinhChuNhat(Point newds[4]);
	void Nhap();
	void Xuat();
	Point* GetPoint();
	void Set();
};

