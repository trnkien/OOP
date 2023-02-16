#pragma once
#include "GiangVien.h"
#include "SinhVien.h"

class Truong:public ConNguoi, public GiangVien
{
private:
	int SoLuong = 0;
	ConNguoi** DanhSach;
public:
	Truong(int soluong);
	void Nhap();
	void XuatDanhSach();
	void Xuat();
};

