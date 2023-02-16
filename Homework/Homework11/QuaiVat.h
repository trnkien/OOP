#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"NhanVat.h"
class NhanVat;
class QuaiVat
{
protected:
	int Level;
	double Damage;
	string He;
public:
	virtual void Nhap();
	virtual void Xuat();
	double getDamage();
	friend void SoSanhSatThuongNhanVatQuaiVat(NhanVat* a, QuaiVat* b);
	string getHe();
};


