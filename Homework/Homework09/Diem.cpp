#include "Diem.h"
#include <iostream>
using namespace std;

void Diem::Nhap()
{
	cout << "Nhap tung do: ";
	cin >> y;
	cout << "Nhap hoanh do: ";
	cin >> x;
}

void Diem::Xuat()
{
	cout << "(" << x << "," << y << ")";
}

