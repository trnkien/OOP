#include "TuongJ.h"

void TuongJ::Nhap()
{
	cout << "Nhap mau: ";
	cin >> Mau;
	ds[0] = new TuongJ();
	ds[1] = new TuongJ();
	switch (Mau)
	{
	case 1:
	{
		ds[0]->ViTri_1 = 1;
		ds[0]->ViTri_2 = 2;
		ds[1]->ViTri_1 = 1;
		ds[1]->ViTri_2 = 8;
		break;
	}
	case 2:
	{
		ds[0]->ViTri_1 = 10;
		ds[0]->ViTri_2 = 2;
		ds[1]->ViTri_1 = 10;
		ds[1]->ViTri_2 = 8;
		break;
	}
	}
}

void TuongJ::Xuat()
{
	if (Mau == 1)
		cout << "Mau trang." << endl;
	else cout << "Mau den." << endl;
	cout << "Vi tri 1: (" << ds[0]->ViTri_1 << ", " << ds[0]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 2: (" << ds[1]->ViTri_1 << ", " << ds[1]->ViTri_2 << ")\t" << endl;
	cout << "Cach di: Di cheo 2 o (ngang 2 va doc 2) cho moi nuoc di.";
	cout << " Tuong chi duoc phep o mot ben ban co, khong duoc di chyen sang nua ban co cua doi phuong.";
	cout << " Nuoc di cua Tuong se khong hop le neu nhu co mot quan co nam chan giua duong di." << endl;
}