#pragma once
#include "Nguoi.h"

class HocSinh :public Nguoi
{
private:
	int lop;
	string truong;
	string hocluc;
public:
	void Nhap();
	void Xuat();
};

