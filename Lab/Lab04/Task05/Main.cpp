#include "HinhVuong.h"
#include <iostream>
using namespace std;

int main()
{
	TuGiac* a;
	int option;
	cout << "* ========== OPTION =========== *" << endl;
	cout << "* 1. Hinh thang.                *" << endl;
	cout << "* 2. Hinh binh hanh.            *" << endl;
	cout << "* 3. Hinh chu nhat.             *" << endl;
	cout << "* 4. Hinh vuong.                *" << endl;
	cout << "* ============================= *" << endl;
	cout << "Option: ";
	cin >> option;
	while (option < 1 || option > 4)
	{
		cout << "Nhap sai ! Nhap lai: ";
		cin >> option;
	}
	switch (option)
	{
	case 1:
		a = new HinhThang();
		((HinhThang*)a)->Nhap();
		((HinhThang*)a)->Xuat();
		break;
	case 2:
		a = new BinhHanh();
		((BinhHanh*)a)->Nhap();
		((BinhHanh*)a)->Xuat();
		break;
	case 3:
		a = new HinhChuNhat();
		((HinhChuNhat*)a)->Nhap();
		((HinhChuNhat*)a)->Xuat();
		break;
	case 4:
		a = new HinhVuong();
		((HinhVuong*)a)->Nhap();
		((HinhVuong*)a)->Xuat();
		break;
	}
}
