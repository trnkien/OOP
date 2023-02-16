#include "dsnv.h"
#include <iostream>

istream& operator>>(istream& is, dsnv& a)
{
	cout << "Nhap so luong nhan vien: ";
	is >> a.soluong;
	a.List = new Nhanvien[a.soluong];
	for (int i = 0; i < a.soluong; i++)
	{
		cout << "nhan vien thu " << i + 1 << ": " << endl;
		cin >> a.List[i];
	}
	return is;
}

ostream& operator<<(ostream& os, dsnv a)
{
	cout << endl << "Danh sach nhan vien: " << endl;
	for (int i = 0; i < a.soluong; i++)
	{
		cout << "Nhan vien thu " << i + 1 << ": " << endl;
		cout << a.List[i];
	}
	return os;
}

int dsnv::salary()
{
	int Luong = 0;
	int SPDinhMuc = 30;
	for (int i = 0; i < soluong; i++)
	{
		if (List[i].Job == 1)
			Luong += 10500000;
		else
		{
			if (List[i].sp > SPDinhMuc)
				Luong += (5000000 + (List[i].sp - SPDinhMuc) * 30000);
			else
				Luong += 5000000;
		}
	}
	return Luong;
}