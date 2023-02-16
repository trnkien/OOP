#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"QuaiVat.h"
class QuaiVat;
class NhanVat
{
protected:
	int Level;
	double Damage;
	string He;
public:
	virtual void Nhap();
	virtual void Xuat();
	double getDamage();
	friend void SoSanhSatThuong2NhanVat(NhanVat* a, NhanVat* b);
	string getHe();
	friend void SoSanhSatThuongNhanVatQuaiVat(NhanVat* a, QuaiVat* b);
};

