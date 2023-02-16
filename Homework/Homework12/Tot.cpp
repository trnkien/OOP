#include "Tot.h"

void Tot::Nhap()
{
	cout << "Nhap mau: ";
	cin >> Mau;
	for (int i = 0; i < 5; i++)
		ds[i] = new Tot();
	switch (Mau)
	{
	case 1:
	{
		ds[0]->ViTri_1 = 4;
		ds[0]->ViTri_2 = 1;
		ds[1]->ViTri_1 = 4;
		ds[1]->ViTri_2 = 3;
		ds[2]->ViTri_1 = 4;
		ds[2]->ViTri_2 = 5;
		ds[3]->ViTri_1 = 4;
		ds[3]->ViTri_2 = 7;
		ds[4]->ViTri_1 = 4;
		ds[4]->ViTri_2 = 9;
		break;
	}
	case 2:
	{
		ds[0]->ViTri_1 = 7;
		ds[0]->ViTri_2 = 1;
		ds[1]->ViTri_1 = 7;
		ds[1]->ViTri_2 = 3;
		ds[2]->ViTri_1 = 7;
		ds[2]->ViTri_2 = 5;
		ds[3]->ViTri_1 = 7;
		ds[3]->ViTri_2 = 7;
		ds[4]->ViTri_1 = 7;
		ds[4]->ViTri_2 = 9;
		break;
	}
	}
}

void Tot::Xuat()
{
	if (Mau == 1)
		cout << "Mau trang." << endl;
	else cout << "Mau den." << endl;
	cout << "Vi tri 1: (" << ds[0]->ViTri_1 << ", " << ds[0]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 2: (" << ds[1]->ViTri_1 << ", " << ds[1]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 3: (" << ds[2]->ViTri_1 << ", " << ds[2]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 4: (" << ds[3]->ViTri_1 << ", " << ds[3]->ViTri_2 << ")\t" << endl;
	cout << "Vi tri 5: (" << ds[4]->ViTri_1 << ", " << ds[4]->ViTri_2 << ")\t" << endl;
	cout << "Cach di: Di moi o mot nuoc.";
	cout << " Neu tot chua vuot qua song, no chi co the di thang tien. Khi da vuot song roi, tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi nuoc." << endl;
}