#include "PS.h"
#include <iostream>
using namespace std;

void nhapmangps(ps mang[], int& soluong)
{
	cout << "Nhap so luong phan so: ";
	cin >> soluong;
	for (int i = 0; i < soluong; i++)
	{
		cout << "Nhap phan so thu" << i + 1 << endl;
		nhapps(mang[i]);
	}
}

void xuatmangps(ps mang[], int soluong)
{
	for (int i = 0; i < soluong; i++)
	{
		cout << "phan so thu " << i + 1 << endl;
		xuatps(mang[i]);
		cout << endl;
	}
}

void nhapps(ps& phanso)
{
	cout << "Nhap tu so: ";
	cin >> phanso.ituso;
	cout << "Nhap mau so: ";
	cin >> phanso.imauso;
}

void xuatps(ps phanso)
{
	cout << phanso.ituso << "/" << phanso.imauso;
}