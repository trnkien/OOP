#pragma once
#include "Date.h"
#include "dsnv.h"
class Nhanvien
{
private:
	string Hoten;
	Date birth;
	string Gender;
	int Job;
	int sp;
public:
	friend istream& operator>>(istream& is, Nhanvien& a);
	friend ostream& operator<<(ostream& os, Nhanvien a);
	friend int salary();
	friend class dsnv;
}; 

