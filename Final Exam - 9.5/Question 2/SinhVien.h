#pragma once
#include "ConNguoi.h"

class SinhVien:public ConNguoi
{
private:
	int GioiTinh;
	float DiemOOP;
	float DiemNmlt;
	float DiemCtdl;
public:
	void Nhap();
	void Xuat();
	int GetGioiTinh();
	float TinhDiemTrungBinh();
};

