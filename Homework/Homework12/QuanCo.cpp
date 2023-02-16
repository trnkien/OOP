#include "QuanCo.h"

QuanCo::QuanCo()
{
	Loai = 1;
	Mau = 1;
	ViTri_1 = 1;
	ViTri_2 = 1;
}

void QuanCo::SetLoai(int newLoai)
{
	Loai = newLoai;
}

void QuanCo::SetViTri(int new1, int new2)
{
	ViTri_1 = new1;
	ViTri_2 = new2;
}

QuanCo::~QuanCo()
{

}