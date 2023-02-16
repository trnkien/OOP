#include "Gate.h"
#include <iostream>
using namespace std;

Gate::Gate()
{
	soluong = 3;
	for (int i = 0; i < 3; i++)
		ds[i];
}

void Gate::Nhap()
{
	cout << " Nhap so luong: ";
	cin >> soluong;
	ds = new Nguoi* [soluong];
	for (int i = 0; i < soluong; i++)
	{
		cout << "Cong[" << i + 1 << "]: " << endl;
		ds[i] = new Nguoi();
		cout << "*****************" << endl;
		cout << "* 1. Doanh Nhan *" << endl;
		cout << "* 2. Hien triet *" << endl;
		cout << "* 3. Dung sy    *" << endl;
		cout << "*****************" << endl;
		int flag;
		cin >> flag;
		while (flag < 1 || flag > 3)
		{
			cout << "Nhap sai ! Nhap lai: ";
			cin >> flag;
		}
		switch (flag)
		{
		case 1:
		{
			int dongia;
			cout << "Nhap don gia: ";
			cin >> dongia;
			int sohang;
			cout << "Nhap so hang: ";
			cin >> sohang;
			int sotien = dongia * sohang;
			ds[i]->SetSotien(sotien);
			ds[i]->SetLoai(flag);
			break;
		}
		case 2:
		{
			ds[i] = new Nguoi();
			int tritue;
			cout << "Nhap chi so tri tue: ";
			cin >> tritue;
			ds[i]->SetTritue(tritue);
			ds[i]->SetLoai(flag);
			break;
		}
		case 3:
		{
			ds[i] = new Nguoi();
			int sucmanh;
			cout << "Nhap chi so suc manh: ";
			cin >> sucmanh;
			ds[i]->SetSucmanh(sucmanh);
			ds[i]->SetLoai(flag);
			break;
		}
		}
	}
}

int Gate::GetSoluong()
{
	return soluong;
}

Nguoi** Gate::Getds()
{
	return ds;
}

Gate::~Gate()
{

}

