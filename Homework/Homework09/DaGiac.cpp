#include "DaGiac.h"
#include <iostream>
using namespace std;

void DaGiac::Nhap()
{
	cout << "Nhap so luong diem: ";
	cin >> n;
	ds = new Diem[n];
	for (int i = 0; i < n; i++)
		Diem::Nhap();
}

void DaGiac::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "]: ";
		Diem::Xuat();
		cout << "\t";
	}
}
