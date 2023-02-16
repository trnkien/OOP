#pragma once
#include"Diem.h"
class DaGiac
{
private:
	int n;
	Diem* arrDiem;
public:
	DaGiac();
	DaGiac(int newn, Diem newarr[]);
	void Nhap();
	void Xuat();
	int Get_n();
	DaGiac Get_arr();
	void Set_n(int n);
	void Set_arr(Diem newarr[]);
	void Set_DaGiac(DaGiac& a);
	DaGiac(DaGiac& a);
	void TinhTien(float a, float b);
	void PhongTo(float k);
	void ThuNho(float k);
	void Quay(float a);
	~DaGiac();
};

