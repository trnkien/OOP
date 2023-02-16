#include "Nguoi.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

Nguoi::Nguoi()
{
	srand(time(NULL));
	sucmanh = 1 + rand()% + 50;
	sotien = 1 + rand()% + 50;
	tritue = 1 + rand()% + 50;
}

void Nguoi::Nhap()
{
	cout << "Nhap chi so suc manh: ";
	cin >> sucmanh;
	cout << "Nhap so tien: ";
	cin >> sotien;
	cout << "Nhap chi so tri tue: ";
	cin >> tritue;
}

void Nguoi::Xuat()
{
	cout << "suc manh: " << sucmanh << endl;
	cout << "tri tue: " << tritue << endl;
	cout << "so tien: " << sotien << endl;
}

int Nguoi::GetLoai()
{
	return loai;
}

int Nguoi::GetSotien()
{
	return sotien;
}

int Nguoi::GetSucmanh()
{
	return sucmanh;
}

int Nguoi::GetTritue()
{
	return tritue;
}

void Nguoi::SetLoai(int a)
{
	loai = a;
}

void Nguoi::SetSotien(int a)
{
	sotien = a;
}

void Nguoi::SetSucmanh(int a)
{
	sucmanh = a;
}

void Nguoi::SetTritue(int a)
{
	tritue = a;
}

Nguoi::~Nguoi()
{

}