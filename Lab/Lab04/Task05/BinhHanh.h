#include "HinhThang.h"
class BinhHanh :public HinhThang
{
protected:
	bool CheckBinhHanh();
public:
	BinhHanh();
	BinhHanh(Point newds[4]);
	void Nhap();
	void Xuat();
	Point* GetPoint();
	void Set();
};