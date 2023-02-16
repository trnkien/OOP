#pragma once
#include "Date.h"

class Nguoi
{
public:
	string Hoten;
	Date Birth;
	int loai;
public:
	void Nhap();
	void Xuat();
	string GetTen();
};

