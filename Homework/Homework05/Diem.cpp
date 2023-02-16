#include "Diem.h"
#include <iostream>
using namespace std;

//Khởi tạo.
Diem::Diem()
{
	x = 1;
	y = 1;
}
Diem::Diem(int newx, int newy) :x(newx), y(newy)
{

}
//Nhập, xuất.
void Diem::NhapDiem()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}
void Diem::XuatDiem()
{
	cout << "(" << x << "," << y << ")" << endl;
}
//Truy vấn.
int Diem::GetHoanhdo()
{
	return x;
}
int Diem::GetTungdo()
{
	return y;
}
//Cập nhật.
void Diem::SetHoanhdo(int newx)
{
	x = newx;
}
void Diem::SetTungdo(int newy)
{
	y = newy;
}
void Diem::SetToado(int newx, int newy)
{
	x = newx;
	y = newy;
}
//Sao chép.
Diem::Diem(Diem& a)
{
	x = a.x;
	y = a.y;
}
//Destructor.
Diem::~Diem()
{

}
