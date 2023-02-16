#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "So Phuc a :";
	SoPhuc a(4, 5);
	a.XuatSP();
	SoPhuc b(5, 6);
	cout << "So Phuc b: ";
	b.XuatSP();
	cout << "a + b = ";
	SoPhuc c = a + b;
	c.XuatSP();
	cout << "a - b = ";
	SoPhuc d = a - b;
	d.XuatSP();
	int e = 3;
	cout << "So nguyen e = " << e << endl;
	cout << "So sanh: " << endl;
	if (a >= b)
		cout << "a >= b." << endl;
	else
		cout << "a <= b." << endl;
	if (c <= d)
		cout << "a+b <= a-b;" << endl;
	else
		cout << "a+b >= a-b;" << endl;
}

