#include "Phao.h"

void Phao::Nhap()
{
	cout << "Nhap mau: ";
	cin >> Mau;
	ds[0] = new Phao();
	ds[1] = new Phao();
	switch (Mau)
	{
	case 1:
	{
		ds[0]->ViTri_1 = 3;
		ds[0]->ViTri_2 = 2;
		ds[1]->ViTri_1 = 3;
		ds[1]->ViTri_2 = 8;
		break;
	}
	case 2:
	{
		ds[0]->ViTri_1 = 8;
		ds[0]->ViTri_2 = 2;
		ds[1]->ViTri_1 = 8;
		ds[1]->ViTri_2 = 8;
		break;
	}
	}
}

void Phao::Xuat()
{
	if (Mau == 1)
		cout << "Mau trang." << endl;
	else cout << "Mau den." << endl;
	cout << "Vi tri 1: (" << ds[0]->ViTri_1 << ", " << ds[0]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 2: (" << ds[1]->ViTri_1 << ", " << ds[1]->ViTri_2 << ")\t" << endl;
	cout << "Cach di: Di ngang va doc giong nhu Xe.";
	cout << " Diem khac biet la neu nhu Phao muon an quan, Phao phai nhay qua dung 1 quan nao do.";
	cout << " Khi khong an quan, tat ca nhung diem tu cho di den cho den phai khong co quan can." << endl;
}
