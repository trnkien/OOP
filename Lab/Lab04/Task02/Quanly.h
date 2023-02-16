#pragma once
#include "Casi.h" 
#include "Congnhan.h"
#include "Hocsinh.h"
#include "Nghesi.h"
#include "Sinhvien.h"

class Quanly :public CaSi, public CongNhan, public HocSinh, public NgheSi, public SinhVien
{
private:
	int soluong;
	Nguoi** ds;
public:
	void Nhap();
	void Xuat();
};
