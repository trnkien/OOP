#pragma once
#include "Diem.h"
class Diem;
class TamGiac
{
private:
	Diem a;
	Diem b;
	Diem c;
public:
	TamGiac();
	TamGiac(Diem newa, Diem newb, Diem newc);
	void Nhap();
	bool CheckTamGiac(Diem a, Diem b, Diem c);
	float Module(Diem a, Diem b);
	void Xuat();
	Diem Get_a();
	Diem Get_b();
	Diem Get_c();
	void Set_a(Diem newa);
	void Set_b(Diem newb);
	void Set_c(Diem newc);
	void Set_abc(Diem newa, Diem newb, Diem newc);
	TamGiac(TamGiac& d);
	void TinhTien(float l, float k);
	void Quay(float d);
	void PhongTo(float a);
	void ThuNho(float b);
	~TamGiac();
};

