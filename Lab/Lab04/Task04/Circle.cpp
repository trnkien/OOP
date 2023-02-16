#include "Circle.h"
#include <iostream>
using namespace std; 

void Circle::Nhap()
{
	cout << "Nhap tam: ";
	O.Nhap();
	cout << "Nhap ban kinh: ";
	cin >> Long;
	Short = Long;
}

void Circle::Xuat()
{
	cout << "Tam ";
	O.Xuat();
	cout << "Ban kinh: " << Long;
}