#include "Si.h"

void Si::Nhap()
{
	cout << "Nhap mau: ";
	cin >> Mau;
	ds[0] = new Si();
	ds[1] = new Si();
	switch (Mau)
	{
	case 1:
	{
		ds[0]->ViTri_1 = 1;
		ds[0]->ViTri_2 = 4;
		ds[1]->ViTri_1 = 1;
		ds[1]->ViTri_2 = 6;
		break;
	}
	case 2:
	{
		ds[0]->ViTri_1 = 10;
		ds[0]->ViTri_2 = 4;
		ds[1]->ViTri_1 = 10;
		ds[1]->ViTri_2 = 6;
		break;
	}
	}
}

void Si::Xuat()
{
	if (Mau == 1)
		cout << "Mau trang." << endl;
	else cout << "Mau den." << endl;
	cout << "Vi tri 1: (" << ds[0]->ViTri_1 << ", " << ds[0]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 2: (" << ds[1]->ViTri_1 << ", " << ds[1]->ViTri_2 << ")\t" << endl;
	cout << "Cach di: Di xeo moi o 1 nuoc. Si luon phai o trong cung nhu Tuong." << endl;
}