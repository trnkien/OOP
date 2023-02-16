#pragma once
#include "Nguoi.h"

class Nhanviensanxuat:public Nguoi
{
private:
	int Luong;
	int Luongcanban, SoSp;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	void SetLuongcanban(int a);
	void SetSosp(int a);
	int GetLuong();
};

