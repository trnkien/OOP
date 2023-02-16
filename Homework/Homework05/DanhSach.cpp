#include "DanhSach.h"
#include <iostream>
using namespace std;
//Nhập, xuất.
void DanhSach::Nhapds()
{
	cout << "Nhap so luong hinh tron: ";
	cin >> soluong;
	dsht = new Circle[soluong];
	for (int i = 0; i < soluong; i++)
		dsht[i].NhapHinhtron();
}
void DanhSach::Xuatds()
{
	cout << "Danh sach hinh tron: " << endl;
	for (int i = 0; i < soluong; i++)
	{
		cout << "Hinh tron thu " << i + 1 << ": " << endl;
		dsht[i].XuatHinhtron();
		cout << endl;
	}
}
//Khởi tạo.
DanhSach::DanhSach()
{
	soluong = 10;
	dsht = new Circle[soluong];
	for (int i = 0; i < soluong; i++)
		dsht[i];

}
DanhSach::DanhSach(int newSoluong)
{
	soluong = newSoluong;
	dsht = new Circle[soluong];
	for (int i = 0; i < soluong; i++)
		dsht[i];
}
DanhSach::DanhSach(DanhSach& c)
{
	soluong = c.soluong;
	dsht = new Circle[soluong];
	for (int i = 0; i < soluong; i++)
		dsht[i] = c.dsht[i];
}
//Destructor.
DanhSach::~DanhSach()
{
	delete[] dsht;
}

