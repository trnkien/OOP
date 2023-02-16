#include "Diem.h"
#include <iostream>
using namespace std;

//Khởi tạo.
Diem::Diem()
{
	x = 1;
	y = 1;
}
Diem::Diem(float newx, float newy)
{
	x = newx;
	y = newy;
}
//Nhập.
void Diem::Nhap() 
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}
//Xuất.
void Diem::Xuat() 
{
	cout << "(" << x << "," << y << ")." << endl;
}
//Truy vấn.
int Diem::Get_x()
{
	return x;
}
int Diem::Get_y()
{
	return y;
}
//Cập nhật.
void Diem::Set_x(float newx)
{
	x = newx;
}
void Diem::Set_y(float newy)
{
	y = newy;
}
void Diem::Set_xy(float newx, float newy)
{
	x = newx;
	y = newy;
}
//Tịnh tiến.
void Diem::TinhTien(float a, float b)
{
	x += a;
	y += b;
}
//Sao chép.
Diem::Diem(Diem& a)
{
	x = a.x;
	y = a.y;
}
//Hàm hủy.
Diem::~Diem()
{
	
}
