#include "QuanLy.h"

void QuanLy::Nhap()
{
	cout << " nhap so luong nhan vat cho danh sach " << endl;
	cin >> n;
	a = new NhanVat * [n];
	for (int i = 0; i < n; i++)
	{
		{
			cout << "Lua chon nhan vat" << endl;
			cout << "1.Thieu Lam " << endl;
			cout << "2.Thien Vuong Bang " << endl;
			cout << "3.Nga My" << endl;
			cout << "4.Thuy Yen Mon " << endl;
			cout << "5.Con Lon " << endl;
			cout << "6.Vo Dang " << endl;
			cout << "7.Ngu Doc Giao" << endl;
			cout << "8.Duong Mon " << endl;
			cout << "9.Cai Bang " << endl;
			cout << "10.Thien Nhan Giao" << endl;
			int t;
			cin >> t;
			switch (t)
			{
			case 1:
				a[i] = new ThieuLam;
				a[i]->Nhap();
				break;
			case 2:
				a[i] = new ThienVuongBang;
				a[i]->Nhap();
				break;
			case 3:
				a[i] = new NgaMy;
				a[i]->Nhap();
				break;
			case 4:
				a[i] = new ThuyYenMon;
				a[i]->Nhap();
				break;
			case 5:
				a[i] = new ConLon;
				a[i]->Nhap();
				break;
			case 6:
				a[i] = new VoDang;
				a[i]->Nhap();
				break;
			case 7:
				a[i] = new NguDocGiao;
				a[i]->Nhap();
				break;
			case 8:
				a[i] = new DuongMon;
				a[i]->Nhap();
				break;
			case 9:
				a[i] = new CaiBang;
				a[i]->Nhap();
				break;
			case 10:
				a[i] = new ThienNhanGiao;
				a[i]->Nhap();
				break;
			}
		}
	}
	cout << " nhap so luong quai vat cho danh sach " << endl;
	cin >> x;
	b = new QuaiVat * [x];
	for (int i = 0; i < x; i++)
	{
		cout << "Lua chon quai vat" << endl;
		cout << "1.Thong Thuong " << endl;
		cout << "2.Dau Linh " << endl;
		int t;
		cin >> t;
		switch (t)
		{
		case 1:
			b[i] = new QuaiVatThongThuong;
			b[i]->Nhap();
			break;
		case 2:
			b[i] = new QuaiVatDauLinh;
			b[i]->Nhap();
			break;
		}
	}
}

void QuanLy::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		a[i]->Xuat();
	}
	for (int i = 0; i < x; i++)
	{
		b[i]->Xuat();
	}
}

void QuanLy::XuatMax()
{
	double S = 0;
	for (int i = 0; i < n; i++)
	{
		if (S < a[i]->getDamage())
			S = a[i]->getDamage();
	}
	for (int i = 0; i < x; i++)
	{
		if (S < b[i]->getDamage())
			S = b[i]->getDamage();
	}
	cout << "Phan tu cho sat thuong cao nhat la: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (S == a[i]->getDamage())
			a[i]->Xuat();
	}
	for (int i = 0; i < x; i++)
	{
		if (S == b[i]->getDamage())
			b[i]->Xuat();
	}
}