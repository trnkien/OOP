#pragma once
#include <iostream>
#include <string>
using namespace std;

class PhanSo
{
private:
	int iTu;
	int iMau;
public:
	PhanSo();
	PhanSo(int a);
	friend istream& operator>>(istream& is, PhanSo& a);
	friend ostream& operator<<(ostream& os, PhanSo a);
	PhanSo operator+(PhanSo a);
	PhanSo operator-(PhanSo a);
	PhanSo operator*(PhanSo a);
	PhanSo operator/(PhanSo a);
	bool operator==(PhanSo a);
	bool operator!=(PhanSo a);
	bool operator>(PhanSo a);
	bool operator>=(PhanSo a);
	bool operator<(PhanSo a);
	bool operator<=(PhanSo a);
	void RutGon();
	friend int uscln(int a, int b);
	~PhanSo()
	{

	}
};

int uscln(int a, int b);