#include"QuanLy.h"
void SoSanhSatThuong2NhanVat(NhanVat* a, NhanVat* b)
{
	double S = a->getDamage();
	double S1 = b->getDamage();
	if (a->getHe() == "Kim")
	{
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Moc")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Hoa")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Thuy")
	{
		if (b->getHe() == "Moc")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Hoa")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Moc")
	{
		if (b->getHe() == "Hoa")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Kim")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Hoa")
	{
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Kim")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Thuy")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Tho")
	{
		if (b->getHe() == "Kim")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Thuy")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Moc")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	cout << "Nhan vat dau co sat thuong tac dong la: " << S << endl;
	cout << "Nhan vat thu 2 co sat thuong tac dong la: " << S1 << endl;
}
void SoSanhSatThuongNhanVatQuaiVat(NhanVat* a, QuaiVat* b)
{
	double S = a->getDamage();
	double S1 = b->getDamage();
	if (a->getHe() == "Kim")
	{
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Moc")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Hoa")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Thuy")
	{
		if (b->getHe() == "Moc")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Hoa")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Moc")
	{
		if (b->getHe() == "Hoa")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Kim")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Hoa")
	{
		if (b->getHe() == "Tho")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Kim")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Thuy")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	if (a->getHe() == "Tho")
	{
		if (b->getHe() == "Kim")
		{
			S = a->getDamage() + (double)0.1 * a->getDamage();
		}
		if (b->getHe() == "Thuy")
		{
			S = a->getDamage() + (double)0.2 * a->getDamage();
			S1 = b->getDamage() - (double)0.2 * b->getDamage();
		}
		if (b->getHe() == "Moc")
		{
			S = a->getDamage() - (double)0.2 * a->getDamage();
			S1 = b->getDamage() + (double)0.2 * b->getDamage();
		}
	}
	cout << "Nhan vat dau co sat thuong tac dong la: " << S << endl;
	cout << "Quai vat thu 2 co sat thuong tac dong la: " << S1 << endl;
}
int main()
{
	while (1)
	{
		cout << "Menu " << endl;
		cout << "1.Tao danh sach " << endl;
		cout << "2.Xuat phan tu co sat thuong cao nhat " << endl;
		cout << "3.So sanh damage tac dong qua lai" << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
			QuanLy a;
			a.Nhap();
			a.Xuat();
		case 2:
			a.XuatMax();
		case 3:
			NhanVat * b = new NhanVat;
			cout << "Lua chon nhan vat thu 1" << endl;
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
				b = new ThieuLam;
				b->Nhap();
				break;
			case 2:
				b = new ThienVuongBang;
				b->Nhap();
				break;
			case 3:
				b = new NgaMy;
				b->Nhap();
				break;
			case 4:
				b = new ThuyYenMon;
				b->Nhap();
				break;
			case 5:
				b = new ConLon;
				b->Nhap();
				break;
			case 6:
				b = new VoDang;
				b->Nhap();
				break;
			case 7:
				b = new NguDocGiao;
				b->Nhap();
				break;
			case 8:
				b = new DuongMon;
				b->Nhap();
				break;
			case 9:
				b = new CaiBang;
				b->Nhap();
				break;
			case 10:
				b = new ThienNhanGiao;
				b->Nhap();
				break;
			}
			NhanVat* d = new NhanVat;
			cout << "Lua chon nhan vat thu 2" << endl;
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
			int e;
			cin >> e;
			switch (e)
			{
			case 1:
				d = new ThieuLam;
				d->Nhap();
				break;
			case 2:
				d = new ThienVuongBang;
				d->Nhap();
				break;
			case 3:
				d = new NgaMy;
				d->Nhap();
				break;
			case 4:
				d = new ThuyYenMon;
				d->Nhap();
				break;
			case 5:
				d = new ConLon;
				d->Nhap();
				break;
			case 6:
				d = new VoDang;
				d->Nhap();
				break;
			case 7:
				d = new NguDocGiao;
				d->Nhap();
				break;
			case 8:
				d = new DuongMon;
				d->Nhap();
				break;
			case 9:
				d = new CaiBang;
				d->Nhap();
				break;
			case 10:
				d = new ThienNhanGiao;
				d->Nhap();
				break;
			}
			QuaiVat* c = new QuaiVat;
			cout << "Lua chon quai vat" << endl;
			cout << "1.Thong Thuong " << endl;
			cout << "2.Dau Linh " << endl;
			int p;
			cin >> p;
			switch (p)
			{
			case 1:
				c = new QuaiVatThongThuong;
				c->Nhap();
				break;
			case 2:
				c = new QuaiVatDauLinh;
				c->Nhap();
				break;
			}
			cout << "1. So sanh sat thuong giua 2 nhan vat " << endl;
			cout << "2. So sanh sat thuong giua nhan vat va quai vat " << endl;
			int k;
			cin >> k;
			switch (k)
			{
			case 1:
				SoSanhSatThuong2NhanVat(b, d);
				break;
			case 2:
				SoSanhSatThuongNhanVatQuaiVat(b, c);
				break;
			}

		}


	}
	return 0;
}