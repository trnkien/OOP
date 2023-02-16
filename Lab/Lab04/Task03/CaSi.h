#pragma once
#include "Nguoi.h"

class CaSi :public Nguoi
{
private:
	int soluong;
	string* song;
public:
	void Nhap();
	void Xuat();
};
