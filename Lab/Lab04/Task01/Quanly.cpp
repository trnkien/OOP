#include "Quanly.h"
#include <iostream>
using namespace std;

void Quanly::Nhap()
{
	cout << "========= NHAP DANH SACH NHAN VIEN ========== " << endl;
	int flag;
	cout << "Nhap so luong nhan vien: ";
	cin >> soluong;
	ds = new Nguoi * [soluong];
	for (int i = 0; i < soluong; i++)
	{
		cout << "Nhan vien thu " << i + 1 << ": " << endl;
		cout << "0: Nhan vien van phong, 1: Nhan vien san xuat : ";
		cin >> flag;
		while (flag < 0 || flag > 1)
		{
			if (flag < 0 || flag > 1)
			{
				cout << "Nhap sai ! Nhap lai: ";
				cin >> flag;
			}
		}
		switch (flag)
		{
		case 0:
		{
			ds[i] = new Nhanvienvanphong();
			((Nhanvienvanphong*)ds[i])->Nhap();
			ds[i]->loai = flag;
			break;
		}
		case 1:
		{
			ds[i] = new Nhanviensanxuat();
			((Nhanviensanxuat*)ds[i])->Nhap();
			ds[i]->loai = flag;
			break;
		}
		}
	}
}

void Quanly::Xuat()
{
	cout << "========= DANH SACH NHAN VIEN ==========" << endl;
	for (int i = 0; i < soluong; i++)
	{
		cout << "Nhan vien thu " << i + 1 << ": " << endl;
		switch (ds[i]->loai)
		{
		case 0:
		{
			((Nhanvienvanphong*)ds[i])->Xuat();
			break;
		}
		case 1:
		{
			((Nhanviensanxuat*)ds[i])->Xuat();
			break;
		}
		}
	}
}

void Quanly::TinhLuong()
{
	cout << "========= LUONG NHAN VIEN =========== " << endl;
	for (int i = 0; i < soluong; i++)
	{
		switch (ds[i]->loai)
		{
		case 0:
		{
			cout << ((Nhanvienvanphong*)ds[i])->GetTen() << endl;
			int a;
			cout << "Nhap so ngay lam viec: ";
			cin >> a;
			((Nhanvienvanphong*)ds[i])->SetSongaylamviec(a);
			((Nhanvienvanphong*)ds[i])->TinhLuong();
			cout << "Luong: " << ((Nhanvienvanphong*)ds[i])->GetLuong() << " VND." << endl;
			break;
		}
		case 1:
		{
			int a,b;
			cout << ((Nhanvienvanphong*)ds[i])->GetTen() << endl;
			cout << "Nhap luong can ban: ";
			cin >> a;
			((Nhanviensanxuat*)ds[i])->SetLuongcanban(a);
			cout << "Nhap so san pham: ";
			cin >> b;
			((Nhanviensanxuat*)ds[i])->SetSosp(b);
			((Nhanviensanxuat*)ds[i])->TinhLuong();
			cout << "Luong: " << ((Nhanviensanxuat*)ds[i])->GetLuong() << " VND." << endl;
			break;
		}
		}
	}
}
