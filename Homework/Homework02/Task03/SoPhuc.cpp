#include "SoPhuc.h"
#include <iostream>
using namespace std;

void nhapsophuc(sp& sophuc)
{
	cout << "Nhap so thuc: ";
	cin >> sophuc.fsothuc;
	cout << "Nhap so ao: ";
	cin >> sophuc.fsoao;
}

void xuatsophuc(sp sophuc)
{
	if (sophuc.fsoao < 0)
		cout << sophuc.fsothuc << sophuc.fsoao << "i" << endl;
	if (sophuc.fsoao > 0)
		cout << sophuc.fsothuc << "+" << sophuc.fsoao << "i" << endl;
}

sp cong2sophuc(sp a, sp b)
{
	sp tong;
	tong.fsothuc = a.fsothuc + b.fsothuc;
	tong.fsoao = a.fsoao + b.fsoao;
	return tong;
}

sp hieu2sophuc(sp a, sp b)
{
	sp hieu;
	hieu.fsothuc = a.fsothuc + b.fsothuc;
	hieu.fsoao = a.fsoao - b.fsoao;
	return hieu;
}