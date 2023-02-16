#pragma once
#include "ConNguoi.h"

class GiangVien:public ConNguoi
{
private:
	int SoTietDay;
public:
	void Nhap();
	void Xuat();
	int GetSoTiet();
};

