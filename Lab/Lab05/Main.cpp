#include "Nguoi.h"
#include "Gate.h"
#include <iostream>
using namespace std;

int main()
{
	Gate gaccong;
	gaccong.Nhap();
	Nguoi hoangtu;
	cout << "Nhap chi so hoang tu: " << endl;
	hoangtu.Nhap();
	for (int i = 0; i < gaccong.GetSoluong(); i++)
	{
		switch (gaccong.Getds()[i]->GetLoai())
		{
		case 1:
			if (hoangtu.GetSotien() < gaccong.Getds()[i]->GetSotien())
				break;
		case 2:
			if (hoangtu.GetTritue() < gaccong.Getds()[i]->GetTritue())
				break;
		case 3:
			if (hoangtu.GetSucmanh() < gaccong.Getds()[i]->GetSucmanh())
			{
				hoangtu.SetSucmanh(hoangtu.GetSucmanh() - gaccong.Getds()[i]->GetSucmanh());
				break;
			}
		}
	}
	cout << "Hoang tu cuu duoc cong chua" << endl;
	hoangtu.Xuat();
}