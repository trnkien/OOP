#pragma once
#include "Nguoi.h"

class NgheSi :public Nguoi
{
private:
	int soluong;
	string* song;
public:
	void Nhap();
	void Xuat();
};
