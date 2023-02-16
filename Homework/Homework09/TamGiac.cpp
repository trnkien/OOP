#include "TamGiac.h"

void TamGiac::Nhap()
{
	n = 3;
	ds = new Diem[n];
	for (int i = 0; i < n; i++)
		Diem::Nhap();
}

void TamGiac::Xuat()
{
	DaGiac::Xuat();
}