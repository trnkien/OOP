#include "Quanly.h"

void Quanly::Nhap()
{
	cout << "Nhap so luong: ";
	cin >> soluong;
	ds = new Nguoi * [soluong];
	cout << " ======== Nhap danh sach ======== " << endl;
	for (int i = 0; i < soluong; i++)
	{
		cout << "[" << i + 1 << "]: " << endl;
		int flag;
		cout << "0: sinh vien. 1: hoc sinh. 2: cong nhan. 3: nghe si. 4: ca si." << endl;
		cin >> flag;
		while (flag < 0 || flag > 4)
		{
			if (flag < 0 || flag > 4)
			{
				cout << "Nhap sai! Nhap lai.";
				cin >> flag;
			}
		}
		switch (flag)
		{
		case 0:
		{
			ds[i] = new SinhVien();
			((SinhVien*)ds[i])->Nhap();
			ds[i]->loai = flag;
			break;
		}
		case 1:
		{
			ds[i] = new HocSinh();
			((HocSinh*)ds[i])->Nhap();
			ds[i]->loai = flag;
			break;
		}
		case 2:
		{
			ds[i] = new CongNhan();
			((CongNhan*)ds[i])->Nhap();
			ds[i]->loai = flag;
			break;
		}
		case 3:
		{
			ds[i] = new NgheSi();
			((NgheSi*)ds[i])->Nhap();
			ds[i]->loai = flag;
			break;
		}
		case 4:
		{
			ds[i] = new CaSi();
			((CaSi*)ds[i])->Nhap();
			ds[i]->loai = flag;
			break;
		}
		}
	}
}

void Quanly::Xuat()
{
	cout << " ======== Danh sach ======== " << endl;
	for (int i = 0; i < soluong; i++)
	{
		cout << "[" << i + 1 << "]: " << endl;
		switch (ds[i]->loai)
		{
		case 0:
		{
			((SinhVien*)ds[i])->Xuat();
			break;
		}
		case 1:
		{
			((HocSinh*)ds[i])->Xuat();
			break;
		}
		case 2:
		{
			((CongNhan*)ds[i])->Xuat();
			break;
		}
		case 3:
		{
			((NgheSi*)ds[i])->Xuat();
			break;
		}
		case 4:
		{
			((CaSi*)ds[i])->Xuat();
			break;
		}
		}
		cout << endl;
	}
}