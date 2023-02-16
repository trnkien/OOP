#include "Vector.h"
#include <iostream>
using namespace std;

//Hàm khởi tạo.
Vector::Vector()
{
	n = 10;
	vecto = new int[n];
	for (int i = 0; i < n; i++)
		vecto[i] = 1;
}
Vector::Vector(int newn):n(newn)
{
	vecto = new int[n];
	for (int i = 0; i < n; i++)
		vecto[i] = 1;
}
//Hàm Nhập, Xuất.
void Vector::Nhap()
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> vecto[i];
	}
}
void Vector::Xuat()
{
	for (int i = 0; i < n; i++)
		cout << vecto[i] << "   ";
	cout << endl;
}
//Hàm truy vấn.
int Vector::Get_n()
{
	return n;
}
int* Vector::Get_vecto()
{
	return vecto;
}
//Hàm cập nhật.
void Vector::Set_n_vecto(int newn, int* newvecto)
{
	n = newn;
	vecto = new int[newn];
	for (int i = 0; i < n; i++)
		vecto[i] = newvecto[i];
}
//Hàm sao chép.
Vector::Vector(Vector& a)
{
	n = a.n;
	vecto = new int[n];
	for (int i = 0; i < n; i++)
		vecto[i] = a.vecto[i];
}
//Hàm hủy
Vector::~Vector()
{
	delete[] vecto;
}
