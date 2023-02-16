#pragma once
#include "HinhTron.h"
class DanhSach
{
private:
	int soluong;
	Circle* dsht;
public:
	void Nhapds();
	void Xuatds();
	DanhSach();
	DanhSach(int newSoluong);
	DanhSach(DanhSach& c);
	~DanhSach();
};

