#pragma once
#include <iostream>
#include <string>
using namespace std;

class ConNguoi
{
protected:
	int Loai;
	string HoTen;
public:
	ConNguoi();
	~ConNguoi();
	virtual void Nhap();
	virtual void Xuat();
	int GetLoai();
	void SetLoai(int newLoai);
};

