#pragma once
class TamGiac;
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
	void TinhTien(float a, float b); //Tịnh tiến cho trước.
	Diem(Diem& a);
	void Quay(float a);
	~Diem();
	friend class TamGiac;
};

