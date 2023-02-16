#include "TamGiac.h"
#include <iostream>
using namespace std;

int main()
{
	Diem a;
	a.Nhap();
	cout << "a: ";
	a.Xuat();
	cout << endl;
	DaGiac b;
	b.Nhap();
	cout << "b: ";
	b.Xuat();
	cout << endl;
	TamGiac c;
	c.Nhap();
	cout << "c: ";
	c.Xuat();
	cout << endl;
}