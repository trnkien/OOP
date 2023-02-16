#pragma once
#include "QuanCo.h"

class Si:public QuanCo
{
private:
	Si* ds[2];
public:
	void Nhap();
	void Xuat();
};
