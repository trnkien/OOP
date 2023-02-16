#pragma once
#include "dsnv.h"
#include "Nhanvien.h"
class Nhanvien;
class dsnv
{
private:
	int soluong;
	Nhanvien* List;
public:
	friend istream& operator>>(istream& is, dsnv& a);
	friend ostream& operator<<(ostream& os, dsnv a);
	int salary();
};

