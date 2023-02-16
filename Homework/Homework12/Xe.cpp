#include "Xe.h"
#include "QuanCo.h"

void Xe::Nhap()
{
	cout << "Nhap mau: ";
	cin >> Mau;
	ds[0] = new Xe();
	ds[1] = new Xe();
	switch (Mau)
	{
	case 1:
	{
		ds[0]->ViTri_1 = 1;
		ds[0]->ViTri_2 = 1;
		ds[1]->ViTri_1 = 1;
		ds[1]->ViTri_2 = 9;
		break;
	}
	case 2:
	{
		ds[0]->ViTri_1 = 10;
		ds[0]->ViTri_2 = 1;
		ds[1]->ViTri_1 = 10;
		ds[1]->ViTri_2 = 9;
		break;
	}
	}
}

void Xe::Xuat()
{
	if (Mau == 1)
		cout << "Mau trang." << endl;
	else cout << "Mau den." << endl;
	cout << "Vi tri 1: (" << ds[0]->ViTri_1 << ", " << ds[0]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 2: (" << ds[1]->ViTri_1 << ", " << ds[1]->ViTri_2 << ")\t" << endl;;
	cout << "Cach di: Di ngang hay doc tren ban co mien la mien la dung bi quan khac can duong tu diem di den diem den." << endl;
}