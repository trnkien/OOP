#include "CaSi.h"

void CaSi::Nhap()
{
	Nguoi::Nhap();
	cout << "Nhap so luong bai hat: ";
	cin >> soluong;
	song = new string[soluong];
	cin.ignore();
	for (int i = 0; i < soluong; i++)
	{
		cout << "Nhap ten bai hat thu " << i + 1 << ": ";
		getline(cin, song[i]);
	}
}

void CaSi::Xuat()
{
	Nguoi::Xuat();
	cout << " ====== Danh sach bai hat =======" << endl;
	for (int i = 0; i < soluong; i++)
		cout << song[i] << endl;
}
