#include "Xe.h"
#include <iostream>
#include <string>
using namespace std;
//Hàm nhập thông tin xe
void Xe::NhapXe()
{
	cout << "Nhap ten xe: ";
	getline(cin, NameCar);
	cout << "Nhap nam san xuat xe: ";
	cin >> YearCar;
	cout << "Nhap so luong banh xe: ";
	cin >> SoluongBanhXe;
	ListTyres = new BanhXe[SoluongBanhXe];
	for (int i = 0; i < SoluongBanhXe; i++)
		ListTyres[i].NhapBanhXe();
}
//Hàm xuất thông tin xe
void Xe::XuatXe()
{
	cout << "Ten xe: " << NameCar << endl;
	cout << "Nam san xuat: " << YearCar << endl;
	cout << "Danh sach banh xe: " << endl;
	for (int i = 0; i < SoluongBanhXe; i++)
		ListTyres[i].XuatBanhXe();
}
