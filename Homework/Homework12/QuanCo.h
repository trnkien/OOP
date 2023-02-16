#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class QuanCo
{
protected:
	int Mau;
	int Loai;
	int ViTri_1;
	int ViTri_2;
public:
	QuanCo();
	~QuanCo();
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	void SetLoai(int newLoai);
	void SetViTri(int new1, int new2);
};

