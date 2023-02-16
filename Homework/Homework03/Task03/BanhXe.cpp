#include "BanhXe.h"
#include <iostream>
#include <string>
using namespace std;
//Hàm nhập bánh xe
void BanhXe::NhapBanhXe()
{
	cin.ignore();
	cout << "Nhap ten banh xe: ";
	getline(cin, NameTyres);
	cout << "Nam san xuat: ";
	cin >> YearTyres;
}
//Xuất bánh xe
void BanhXe::XuatBanhXe()
{
	cout << "Ten banh xe: " << NameTyres << endl;
	cout << "Nam san xuat banh xe: " << YearTyres << endl;
}