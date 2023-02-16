#pragma once
class Diem
{
private:
	int x;
	int y;
public:
	void NhapDiem();
	void XuatDiem();
	Diem();
	Diem(int newx, int newy);
	int GetHoanhdo();
	int GetTungdo();
	void SetHoanhdo(int newx);
	void SetTungdo(int newy);
	void SetToado(int newx, int newy);
	Diem(Diem& a);
	~Diem();
};

