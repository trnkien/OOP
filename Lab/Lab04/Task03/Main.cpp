#include "CaSi.h"
#include "CongNhan.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "SinhVien.h"

int main()
{
	Nguoi* a;
	int flag;
	cout << " ====== Nhap ======== " << endl;
	cout << "0: sinh vien. 1: hoc sinh. 2: cong nhan. 3: nghe si. 4: ca si." << endl;
	cin >> flag;
	while (flag < 0 || flag > 4)
	{
		if (flag < 0 || flag > 4)
		{
			cout << "Nhap sai ! Nhap lai: ";
			cin >> flag;
		}
	}
	switch (flag)
	{
	case 0:
	{
		a = new SinhVien();
		((SinhVien*)a)->Nhap();
		a->loai = flag;
		break;
	}
	case 1:
	{
		a = new HocSinh();
		((HocSinh*)a)->Nhap();
		a->loai = flag;
		break;
	}
	case 2:
	{
		a = new CongNhan();
		((CongNhan*)a)->Nhap();
		a->loai = flag;
		break;
	}
	case 3:
	{
		a = new NgheSi();
		((NgheSi*)a)->Nhap();
		a->loai = flag;
		break;
	}
	case 4:
	{
		a = new CaSi();
		((CaSi*)a)->Nhap();
		a->loai = flag;
		break;
	}
	default:
	{
		cout << "Nhap sai ! mac dinh la sinh vien !" << endl;
		a = new SinhVien();
		((SinhVien*)a)->Nhap();
		a->loai = flag;
		break;
	}
	}
	cout << " ====== Xuat ======== " << endl;
	switch (a->loai)
	{
	case 0:
	{
		((SinhVien*)a)->Xuat();
		break;
	}
	case 1:
	{
		((HocSinh*)a)->Xuat();
		break;
	}
	case 2:
	{
		((CongNhan*)a)->Xuat();
		break;
	}
	case 3:
	{
		((NgheSi*)a)->Xuat();
		break;
	}
	case 4:
	{
		((CaSi*)a)->Xuat();
		break;
	}
	}
}