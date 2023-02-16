#include "DSSP.h"
#include <iostream>
using namespace std;
class DSSP;
istream& operator>>(istream& is, DSSP& a)
{
	cout << "Nhap so luong phan tu: ";
	is >> a.soluong;
	a.dssp = new SoPhuc[a.soluong];
	for (int i = 0; i < a.soluong; i++)
	{
		cout << "[" << i << "]: ";
		cin >> a.dssp[i];
	}
	return is;
}
ostream& operator<<(ostream& os, DSSP a)
{
	cout << "Danh sach so phuc: " << endl << "\t";
	for (int i = 0; i < a.soluong; i++)
	{
		cout << "[" << i << "]: ";
		os << a.dssp[i] << "\t";
	}
	return os;
}
DSSP& DSSP::operator=(DSSP& a)
{
	this->soluong = a.soluong;
	this->dssp = new SoPhuc[soluong];
	for (int i = 0; i < soluong; i++)
		dssp[i] = a.dssp[i];
	return *this;
}
SoPhuc DSSP::operator[](int i)
{
	return dssp[i];
}