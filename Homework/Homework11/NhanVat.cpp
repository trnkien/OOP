#include "NhanVat.h"

void NhanVat::Nhap()
{
	cout << "Nhap cap do cho nhan vat " << endl;
	cin >> Level;
	Damage = Level * 5;
}

void NhanVat::Xuat()
{
	cout << "Level nguoi choi: " << Level << endl;
	cout << "Damage nguoi choi" << Damage << endl;
}

double NhanVat::getDamage()
{
	return Damage;
}

string NhanVat::getHe()
{
	return He;
}

