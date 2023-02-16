#pragma once
class SoPhuc
{
private:
	float fThuc;
	float fAo;
public:
	void NhapSP();
	void XuatSP();
	SoPhuc Cong(SoPhuc sp2);
	SoPhuc Hieu(SoPhuc sp2);
	SoPhuc Tich(SoPhuc sp2);
	SoPhuc Thuong(SoPhuc sp2);
	float DinhGiaTri();
};

