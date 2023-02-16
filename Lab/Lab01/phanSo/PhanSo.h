#pragma once
class PhanSo
{
private:
	int iTu;
	int iMau;
public:
	void NhapPS();
	void XuatPS();
	PhanSo Tong(PhanSo ps2);
	PhanSo Hieu(PhanSo ps2);
	PhanSo Tich(PhanSo ps2);
	PhanSo Thuong(PhanSo ps2);
	void RutGon(); 
	float DinhGiaTri();
};
int uscln(int a, int b);



