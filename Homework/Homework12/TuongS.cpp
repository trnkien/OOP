#include "TuongS.h"

void TuongS::Nhap()
{
	cout << "Nhap mau: ";
	cin >> Mau;
	switch (Mau)
	{
	case 1:
	{
		ViTri_1 = 1;
		ViTri_2 = 5;
		break;
	}
	case 2:
	{
		ViTri_1 = 10;
		ViTri_2 = 5;
		break;
	}
	}
}

void TuongS::Xuat()
{
	if (Mau == 1)
		cout << "Mau trang." << endl;
	else cout << "Mau den." << endl;
	cout << "Vi tri: (" << ViTri_1 << ", " << ViTri_2 << ")" << endl;
	cout << "Cach di: Di tung o mot. Di ngang hoac doc. Tuong luon phai nam trong pham vi cung va khong duoc ra ngoai.";
	cout << " Cung tuc la hinh vuong 2X2 duoc danh dau bang hinh cheo chu X" << endl;
}
