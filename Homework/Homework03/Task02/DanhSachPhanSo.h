#pragma once
#include "PhanSo.h"
class DanhSachPhanSo
{
private:
	int soluong;
	PhanSo* Dsps;
	PhanSo tongdsps;
public:
	void NhapDsps();
	void XuatDsps();
	PhanSo CongDsps();
};
int uscln(int a, int b);
