#include "QuaiVat.h"

void QuaiVat::Nhap()
{
	cout << "Nhap cap do cho quai vat " << endl;
	cin >> Level;
	cout << "Nhap He cho quai vat" << endl;
	cin.ignore();
	getline(cin, He);
}

void QuaiVat::Xuat()
{
	cout << "Level quai vat: " << Level << endl;
	cout << "Damage quai vat" << Damage << endl;
}

double QuaiVat::getDamage()
{
	return Damage;
}

string QuaiVat::getHe()
{
	return He;
}