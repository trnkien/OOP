#include "QuanLy.h"
#include <iostream>
void QuanLy::Nhap()
{
	cout << "Nhap so luong: ";
	cin >> soluong;
	ds = new Nguoi * [soluong];
	for (int i = 0; i < soluong; i++)
	{
		cout << "[" << i + 1 << "]" << endl;
		int flag;
		cout << "Nhap tuoi: ";
		cin >> flag;
		while (flag < 0)
		{
			if (flag < 0)
			{
				cout << "Nhap sai ! Nhap lai: ";
				cin >> flag;
			}
		}
		if (flag < 10)
		{
			ds[i] = new TreEm();
			((TreEm*)ds[i])->Nhap();
			ds[i]->Tuoi = flag;
		}
		else
		{
			ds[i] = new NguoiLon();
			((NguoiLon*)ds[i])->Nhap();
			ds[i]->Tuoi = flag;
		}
	}
}

void QuanLy::Xuat()
{
	cout << "========= Danh Sach ==========" << endl;
	for (int i = 0; i < soluong; i++)
	{
		cout << "[" << i + 1 << "]" << endl;
		if (ds[i]->Tuoi < 10)
			((TreEm*)ds[i])->Xuat();
		else
			((NguoiLon*)ds[i])->Xuat();
	}
}

void QuanLy::Giave()
{
	for (int i = 0; i < soluong; i++)
	{
		cout << "[" << i + 1 << "]" << endl;
		cout << "Nhap so tro choi da choi: ";
		cin >> ds[i]->sotrochoi;
		if (ds[i]->Tuoi < 10)
		{
			((TreEm*)ds[i])->giave = 100000 * ds[i]->sotrochoi;
			if (((TreEm*)ds[i])->chieucao < 130)
				((TreEm*)ds[i])->giave -= ((TreEm*)ds[i])->giave * 50 / 100;
			if (((TreEm*)ds[i])->chieucao < 130)
				((TreEm*)ds[i])->giave -= ((TreEm*)ds[i])->giave * 70 / 100;
		}
		else
			((NguoiLon*)ds[i])->giave = 100000 * ds[i]->sotrochoi;
	}
}

void QuanLy::Max_player()
{
	int max = 0;
	Nguoi* temp = ds[0];
	for (int i = 0; i < soluong; i++)
	{
		if (ds[i]->Tuoi < 10)
		{
			if (((TreEm*)ds[i])->giave > max)
			{
				max = ((TreEm*)ds[i])->giave;
				temp = ds[i];
			}
		}
		else if (((NguoiLon*)ds[i])->giave > max)
		{
			max = ((NguoiLon*)ds[i])->giave;
			temp = ds[i];
		}
	}
	if (temp->Tuoi < 10)
	{
		((TreEm*)temp)->Xuat();
		cout << ((TreEm*)temp)->giave << " VND" << endl;
	}
	else
	{
		((NguoiLon*)temp)->Xuat();
		cout << ((NguoiLon*)temp)->giave << " VND" << endl;
	}
}

void QuanLy::ShortestChild()
{
	Nguoi* temp = ds[0];
	int shortest = 150;
	for (int i = 0; i < soluong; i++)
	{
		if (ds[i]->Tuoi < 10)
		{
			if (((TreEm*)ds[i])->chieucao < shortest)
			{
				shortest = ((TreEm*)ds[i])->chieucao;
				temp = ds[i];
			}
		}
	}
	if (shortest == 150)
		cout << "Khong co tre em !" << endl;
	else
		((TreEm*)temp)->Xuat();
}