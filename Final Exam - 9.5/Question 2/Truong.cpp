#include "Truong.h"

Truong::Truong(int soluong)
{
	SoLuong = soluong;
	DanhSach = new ConNguoi*[SoLuong];
}

void Truong::Nhap()
{
	if (SoLuong == 0)
	{
		cout << "Nhap so luong: ";
		cin >> SoLuong;
		DanhSach = new ConNguoi*[SoLuong];
	}
	cout << endl << "========= NHAP ==========" << endl << endl;
	for (int i = 0; i < SoLuong; i++)
	{
		int flag;
		cout << "Hay chon 1 neu la Giang vien." << endl;
		cout << "Hay chon 2 neu la Sinh vien." << endl;
		cin >> flag;
		while (flag < 1 || flag > 2)
		{
			cout << "Nhap sai ! Nhap lai: ";
			cin >> flag;
		}
		switch (flag)
		{
		case 1:
		{
			DanhSach[i] = new GiangVien();
			DanhSach[i]->Nhap();
			break;
		}
		case 2:
		{
			DanhSach[i] = new SinhVien();
			DanhSach[i]->Nhap();
			break;
		}
		}
		cout << endl;
	}
}

void Truong::XuatDanhSach()
{
	cout << endl << "======= XUAT ==========" << endl << endl;
	for (int i = 0; i < SoLuong; i++)
	{
		DanhSach[i]->Xuat();
		cout << endl;
	}
}

void Truong::Xuat()
{
	int InforTeacher = 0;
	//Đặt cờ hiệu
	for (int i = 0; i < SoLuong; i++)
	{
		if (DanhSach[i]->GetLoai() == 1)
		{
			InforTeacher = i;
			cout << " i = " << i;
		}
	}
	cout << "Danh sach hoc sinh co diem trung binh > 8: " << endl;
	for (int i = 0; i < SoLuong; i++)
	{
		switch (DanhSach[i]->GetLoai())
		{
		case 1:
		{
			if (((GiangVien*)DanhSach[i])->GetSoTiet() > ((GiangVien*)DanhSach[InforTeacher])->GetSoTiet())
			{
				InforTeacher = i;
				cout << "giang vien sieng: " << i << endl;
			}
			break;
		}
		case 2:
		{
			cout << "gioi tinh: " << ((SinhVien*)DanhSach[i])->GetGioiTinh();
			if (((SinhVien*)DanhSach[i])->GetGioiTinh() == 2)
				if (((SinhVien*)DanhSach[i])->TinhDiemTrungBinh() > 8)
					DanhSach[i]->Xuat();
			break;
		}
		}
	}
	cout << "Giang vien co so tiet day nhieu nhat: " << endl;
	DanhSach[InforTeacher]->Xuat();
}