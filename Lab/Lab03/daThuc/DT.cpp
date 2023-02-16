#include "DT.h"
#include <iostream>
using namespace std;

DT::DT()
{
	heso = 1;
	somu = 1;
}

DT::DT(float nheso, float nsomu)
{
	heso = nheso;
	somu = nsomu;
}
istream& operator>>(istream& is, DT& a)
{
	cout << "Nhap he so: ";
	is >> a.heso;
	cout << "Nhap so mu: ";
	is >> a.somu;
	return is;
}

ostream& operator<<(ostream& os, DT a)
{
	os << a.heso << "x^" << a.somu;
	return os;
}

float DT::GiaTri(float x)
{
	float kq;
	kq = heso * pow(x, somu);
	return kq;
}

DT DT::operator=(DT a)
{
	DT kq;
	kq.heso = a.heso;
	kq.somu = a.somu;
	return kq;
}

bool DT::operator<(DT a)
{
	int x = 1;
	float ss1 = this->GiaTri(x);
	float ss2 = a.GiaTri(x);
	if (ss1 < ss2)
		return true;
	return false;
}

bool DT::operator<=(DT a)
{
	int x = 1;
	float ss1 = this->GiaTri(x);
	float ss2 = a.GiaTri(x);
	if (ss1 <= ss2)
		return true;
	return false;
}

bool DT::operator>(DT a)
{
	int x = 1;
	float ss1 = this->GiaTri(x);
	float ss2 = a.GiaTri(x);
	if (ss1 > ss2)
		return true;
	return false;
}

bool DT::operator>=(DT a)
{
	int x = 1;
	float ss1 = this->GiaTri(x);
	float ss2 = a.GiaTri(x);
	if (ss1 >= ss2)
		return true;
	return false;
}

bool DT::operator==(DT a)
{
	int x = 1;
	float ss1 = this->GiaTri(x);
	float ss2 = a.GiaTri(x);
	if (ss1 == ss2)
		return true;
	return false;
}

bool DT::operator!=(DT a)
{
	int x = 1;
	float ss1 = this->GiaTri(x);
	float ss2 = a.GiaTri(x);
	if (ss1 != ss2)
		return true;
	return false;
}

float DT::GetHeSo()
{
	return heso;
}

float DT::GetSoMu()
{
	return somu;
}

void DT::SetHeSo(float newheso)
{
	heso = newheso;
}

void DT::SetSoMu(float newsomu)
{
	somu = newsomu;
}

void DT::SetDT(DT newdt)
{
	heso = newdt.heso;
	somu = newdt.somu;
}

