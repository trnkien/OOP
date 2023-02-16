#pragma once
#include "Diem.h"
class DaGiac :public Diem
{
protected:
	int n;
	Diem* ds;
public:
	void Nhap();
	void Xuat();
	~DaGiac()
	{

	}
};

