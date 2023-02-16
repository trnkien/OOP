#include "Tam.h"
#include <iostream>
using namespace std;

void Tam::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

void Tam::Xuat()
{
	cout << "(" << x << ", " << y << ")";
}