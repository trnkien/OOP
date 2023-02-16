#pragma once
#include "Nguoi.h"
#include "Nhanviensanxuat.h"
#include "Nhanvienvanphong.h"

class Quanly :public Nhanviensanxuat, public Nhanvienvanphong
{
private:
	int soluong;
	Nguoi** ds;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
};



