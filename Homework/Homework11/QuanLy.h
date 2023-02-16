#pragma once
#include"NhanVat.h"
#include"QuaiVat.h"
#include"ThieuLam.h"
#include"ThienVuongBang.h"
#include"NgaMy.h"
#include"ThuyYenMon.h"
#include"ConLon.h"
#include"VoDang.h"
#include"NguDocGiao.h"
#include"DuongMon.h"
#include"CaiBang.h"
#include"ThienNhanGiao.h"
#include"QuaiVatDauLinh.h"
#include"QuaiVatThongThuong.h"
class QuanLy
{
private:
	NhanVat** a;
	int n;
	QuaiVat** b;
	int x;
public:
	void Nhap();
	void Xuat();
	void XuatMax();
};



