#pragma once
#include "Nguoi.h"

class SinhVien :public Nguoi
{
private:
	int mssv;
	string truong;
	string nganh;
public:
	void Nhap();
	void Xuat();
};
