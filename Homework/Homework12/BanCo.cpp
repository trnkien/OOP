#include "BanCo.h"

BanCo::BanCo()
{
	DanhSach = new QuanCo * [7];
	DanhSach[0] = new Xe();
	DanhSach[1] = new Ma();
	DanhSach[2] = new TuongJ();
	DanhSach[3] = new Si();
	DanhSach[4] = new TuongS();
	DanhSach[5] = new Phao();
	DanhSach[6] = new Tot();
}
void BanCo::Nhap()
{
	cout << "======= Option ========" << endl;
	cout << "* 1. Xe.              *" << endl;
	cout << "* 2. Ma.              *" << endl;
	cout << "* 3. TuongJ.          *" << endl;
	cout << "* 4. Si.              *" << endl;
	cout << "* 5. TuongS.          *" << endl;
	cout << "* 6. Phao.            *" << endl;
	cout << "* 7. Tot.             *" << endl;
	cout << "=======================" << endl;
	cout << "Lua chon: ";
	cin >> option;
	while (option < 1 || option > 7)
	{
		cout << "Chon sai ! Chon lai: ";
		cin >> option;
	}
	switch (option)
	{
	case 1:
	{
		DanhSach[option]->Nhap();
		break;
	}
	case 2:
	{
		DanhSach[option]->Nhap();
		break;
	}
	case 3:
	{
		DanhSach[option]->Nhap();
		break;
	}
	case 4:
	{
		DanhSach[option]->Nhap();
		break;
	}
	case 5:
	{
		DanhSach[option]->Nhap();
		break;
	}
	case 6:
	{
		DanhSach[option]->Nhap();
		break;
	}
	case 7:
	{
		DanhSach[option]->Nhap();
		break;
	}
	}
}

void BanCo::Xuat()
{
	switch (option)
	{
	case 1:
	{
		DanhSach[option]->Xuat();
		break;
	}
	case 2:
	{
		DanhSach[option]->Xuat();
		break;
	}
	case 3:
	{
		DanhSach[option]->Xuat();
		break;
	}
	case 4:
	{
		DanhSach[option]->Xuat();
		break;
	}
	case 5:
	{
		DanhSach[option]->Xuat();
		break;
	}
	case 6:
	{
		DanhSach[option]->Xuat();
		break;
	}
	case 7:
	{
		DanhSach[option]->Xuat();
		break;
	}
	}
}

BanCo::~BanCo()
{

}