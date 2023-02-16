#pragma once
class PhanSo
{
private:
	int iTu;
	int iMau;
public:
	void NhapPS();
	void XuatPS();
	PhanSo CongPS(PhanSo ps2);
	void Rutgon();
	PhanSo GanPS(PhanSo ps2);
	void KhoiTaoTong();
};