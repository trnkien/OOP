#include "DaThuc.h"
#include <iostream>
using namespace std;

//Khởi tạo.
DT::DT()
{
	n = 5;
	int temp = n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = temp;
		temp--;
	}
}
DT::DT(int newn)
{
	n = newn;
	int temp = n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = temp;
		temp--;
	}
} 
//Nhập.
void DT::Nhap()
{
	cout << "Nhap bac mu cao nhat: ";
	cin >> n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int heso;
		cout << "Nhap he so thu " << i + 1 << ": ";
		cin >> heso;
		arr[i] = heso;
	}
}
//Xuất.
void DT::Xuat()
{
	int temp = n;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			cout << " " << arr[i] << "x^" << temp << " ";
		else
			cout << " + " << arr[i] << "x^" << temp << " ";
		temp--;
	}
	cout << endl;
}
//Truy vấn.
int DT::Get_n()
{
	return n;
}
//Cập nhật.
void DT::Set_n(int newn)
{
	n = newn;
	arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		int heso;
		cout << "Nhap he so thu " << i + 1 << ": ";
		cin >> heso;
		arr[i] = heso;
	}
}
void DT::Set_DT(int newn, int* newarr)
{
	n = newn;
	arr = new int[n];
	for (int i = 0; i < n; i++)
		arr[i] = newarr[i];
}
//Sao chép.
DT DT::Copy(DT& DTCop)
{
	DT Copy;
	Copy.n = DTCop.n;
	arr = new int[n];
	for (int i = 0; i < n; i++)
		Copy.arr[i] = DTCop.arr[i];
	return Copy;
}
//Phép toán.
DT DT::operator+(DT dt2)
{
	DT kq;
	int maxx;
	if (n >= dt2.n)
	{
		maxx = n;
		kq.n = maxx;
		kq.arr = new int[maxx];
		for (int i = 0; i < maxx; i++)
			kq.arr[i] = arr[i];
		for (int i = 0; i < dt2.n; i++)
			kq.arr[i] += dt2.arr[i];
	}
	else
	{
		maxx = dt2.n;
		kq.n = maxx;
		kq.arr = new int[maxx];
		for (int i = 0; i < maxx; i++)
			kq.arr[i] = dt2.arr[i];
		for (int i = 0; i < n; i++)
			kq.arr[i] += arr[i];
	}
	return kq;
}
DT DT::operator-(DT dt2)
{
	DT kq;
	int maxx;
	if (n >= dt2.n)
	{
		maxx = n;
		kq.n = maxx;
		kq.arr = new int[maxx];
		for (int i = 0; i < maxx; i++)
			kq.arr[i] = arr[i];
		for (int i = 0; i < dt2.n; i++)
			kq.arr[i] -= dt2.arr[i];
	}
	else
	{
		maxx = dt2.n;
		kq.n = maxx;
		kq.arr = new int[maxx];
		for (int i = 0; i < maxx; i++)
			kq.arr[i] = dt2.arr[i];
		for (int i = 0; i < n; i++)
			kq.arr[i] -= arr[i];
	}
	return kq;
}
bool DT::operator!=(DT dt2)
{
	int dem = 0;
	if(n == dt2.n)
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == dt2.arr[i])
				dem++;
		}
	if (dem == n)
		return false;
	else
		return true;
}
//Giá trị định thức.
long DT::GiatriDaThuc()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int temp = n;
	long kq = 0;
	for (int i = 0; i < n; i++)
	{
		kq += arr[0] * pow(x, temp);
		temp--;
	}
	return kq;
}
//Hủy
DT::~DT()
{

}