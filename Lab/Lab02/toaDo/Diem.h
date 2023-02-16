#pragma once
class Diem
{
private:
	float x;
	float y;
public:
	Diem();
	Diem(float newx, float newy);
	void Nhap();
	void Xuat();
	int Get_x();
	int Get_y();
	void Set_x(float newx);
	void Set_y(float newy);
	void Set_xy(float newx, float newy);
	void TinhTien(float a, float b);
	Diem(Diem& a);
	~Diem();
};

