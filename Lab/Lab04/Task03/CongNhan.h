#pragma once
#include "Nguoi.h"

class CongNhan : public Nguoi
{
private:
	string congty;
	string nghe;
public:
	void Nhap();
	void Xuat();
};
