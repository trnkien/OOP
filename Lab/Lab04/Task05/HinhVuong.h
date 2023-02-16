#pragma 
#include "HinhChuNhat.h"
class HinhVuong:public HinhChuNhat
{
private:
	bool CheckHinhVuong();
public:
	HinhVuong();
	HinhVuong(Point newds[4]);
	void Nhap();
	void Xuat();
	Point* GetPoint();
	void Set();
};

