#include "HinhTron.h"
#include <iostream>
using namespace std;
//Khởi tạo.
Circle::Circle()
{
	R = 1;
	Tam;
}
Circle::Circle(Diem newTam, int newR) :Tam(newTam), R(newR)
{

}
//Nhập, xuất.
void Circle::NhapHinhtron()
{
	cout << "Nhap toa do tam duong tron: " << endl;
	Tam.NhapDiem();
	cout << "Nhap chieu dai ban kinh hinh tron: ";
	cin >> R;
}
void Circle::XuatHinhtron()
{
	cout << "Toa do tam duong tron: ";
	Tam.XuatDiem();
	cout << "Ban kinh = " << R << endl;
}
//Truy vấn.
Diem Circle::GetTam()
{
	return Tam;
}
int Circle::GetR()
{
	return R;
}
//Cập nhật.
void Circle::SetTam(Diem newTam)
{
	Tam = newTam;
}
void Circle::SetR(int newR)
{
	R = newR;
}
void Circle::SetToado(Diem newTam, int newR)
{
	Tam = newTam;
	R = newR;
}
//Sao chép.
Circle::Circle(Circle& a)
{
	Tam = a.Tam;
	R = a.R;
}
//Destructor.
Circle::~Circle()
{

}