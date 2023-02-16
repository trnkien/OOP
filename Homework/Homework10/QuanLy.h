#pragma once
#include "NguoiLon.h"
#include "TreEm.h"

class QuanLy:public NguoiLon, public TreEm
{
private:
	int soluong;
	Nguoi** ds;
public:
	void Nhap();
	void Xuat();
	void Giave();
	void Max_player();
	void ShortestChild();
};

