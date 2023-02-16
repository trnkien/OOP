#pragma once
#include "QuanCo.h"

class Ma :public QuanCo
{
private:
	Ma* ds[2];
public:
	void Nhap();
	void Xuat();
};

