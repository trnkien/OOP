#include "TreEm.h"
#include <iostream>

void TreEm::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap chieu cao: ";
	cin >> chieucao;
	while (chieucao < 0)
	{
		if (chieucao < 0)
		{
			cout << "Nhap sai ! Nhap lai: ";
			cin >> chieucao;
		}
	}
	if (chieucao < 130)
	{
		cout << "0. Mau giao, 1. Tieu hoc, 2. Trung hoc." << endl;
		cin >> truong;
		while (truong < 0 || truong > 2)
		{
			cout << "Nhap sai ! Nhap lai: ";
			cin >> truong;
		}
	}
	else
	{
		cout << "1. Tieu hoc, 2. Trung hoc." << endl;
		cin >> truong;
		while (truong < 1 || truong > 2)
		{
			cout << "Nhap sai ! Nhap lai: ";
			cin >> truong;
		}
	}
	while (truong < 0 || truong > 2)
	{
		if (truong < 0 || truong > 2)
		{
			cout << "Nhap sai! Nhap lai: ";
			cin >> truong;
		}
	}
}

void TreEm::Xuat()
{
	Nguoi::Xuat();
	cout << "Tuoi: " << Tuoi << endl;
	cout << "Chieu cao: " << chieucao << endl;
	switch (truong)
	{
	case 0:
		cout << "Hoc truong mau giao. " << endl;
		break;
	case 1:
		cout << "Hoc truong tieu hoc. " << endl;
		break;
	case 2:
		cout << "Hoc truong trung hoc. " << endl;
		break;
	}
}