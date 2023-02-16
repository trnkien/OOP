#include "DaThuc.h"
#include <iostream>
using namespace std;

int main()
{
	DT a;
	cout << "Nhap da thuc a: " << endl;
	a.Nhap();
	DT b;
	cout << "Nhap da thuc b: " << endl;
	b.Nhap();
	cout << "Da thuc a:";
	a.Xuat();
	cout << "Da thuc b:";
	b.Xuat();
	cout << "a + b:";
	DT c = a + b;
	c.Xuat();
	cout << "a - b:";
	DT d = a - b;
	d.Xuat();
	cout << "a != b: ";
	if (a != b)
		cout << "true." << endl;
	else
		cout << "false." << endl;
	long kq = a.GiatriDaThuc();
	cout << "Gia tri da thuc a: " << kq;
}