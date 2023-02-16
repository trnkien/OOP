#include "Ma.h"

void Ma::Nhap()
{
	cout << "Nhap mau: ";
	cin >> Mau;
	ds[0] = new Ma();
	ds[1] = new Ma();
	switch (Mau)
	{
	case 1:
	{
		ds[0]->ViTri_1 = 1;
		ds[0]->ViTri_2 = 3;
		ds[1]->ViTri_1 = 1;
		ds[1]->ViTri_2 = 8;
		break;
	}
	case 2:
	{
		ds[0]->ViTri_1 = 10;
		ds[0]->ViTri_2 = 3;
		ds[1]->ViTri_1 = 10;
		ds[1]->ViTri_2 = 8;
		break;
	}
	}
}

void Ma::Xuat()
{
	if (Mau == 1)
		cout << "Mau trang." << endl;
	else cout << "Mau den." << endl;
	cout << "Vi tri 1: (" << ds[0]->ViTri_1 << ", " << ds[0]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 2: (" << ds[1]->ViTri_1 << ", " << ds[1]->ViTri_2 << ")\t" << endl; 
	cout << "Cach di: Di ngang 2 o hay doc 1 o (hay doc 1 o va ngang 2 o) cho moi nuoc di.";
	cout << " Neu co quan nam ngay ben canh ma va can duong ngang 2 (hay doc 2), ma bi can khong di duoc duong do." << endl;
}
