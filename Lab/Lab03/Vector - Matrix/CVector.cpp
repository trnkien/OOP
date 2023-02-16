#include "CVector.h"

Vector::Vector()
{
	n = 10;
	vector = new int[n];
	for (int i = 0; i < n; i++)
		vector[i] = 1;
}

Vector::Vector(int newn) :n(newn)
{
	vector = new int[n];
	for (int i = 0; i < n; i++)
		vector[i] = 1;
}

istream& operator>>(istream& is, Vector& a)
{
	cout << "Nhap so luong phan tu: ";
	is >> a.n;
	a.vector = new int[a.n];
	for (int i = 0; i < a.n; i++)
	{
		cout << "Nhap phan tu thu: " << i + 1 << ": ";
		cin >> a.vector[i];
	}
	return is;
}

ostream& operator<<(ostream& os, Vector& a)
{
	for (int i = 0; i < a.n; i++)
		os << a.vector[i] << "\t";
	cout << endl;
	return os;
}

int Vector::Get_n()
{
	return n;
}

int* Vector::GetVector()
{
	return vector;
}

void Vector::Setn(int newn)
{
	n = newn;
}

void Vector::SetVector(int* newvector)
{
	vector = newvector;
}

void Vector::SetVector(Vector a)
{
	n = a.n;
	vector = new int[n];
	for (int i = 0; i < n; i++)
		vector[i] = a.vector[i];
}

void Vector::operator=(Vector a)
{
	n = a.n;
	a.vector = new int[n];
	for (int i = 0; i < n; i++)
		vector[i] = a.vector[i];
}

long Vector::Giatri()
{
	long kq = 0;
	for (int i = 0; i < n; i++)
		kq += vector[i];
	return kq;
}

bool Vector::operator==(Vector a)
{
	if (n != a.n)
		return false;
	for (int i = 0; i < n; i++)
		if (vector[i] != a.vector[i])
			return false;
	return true;
}

bool Vector::operator!=(Vector a)
{
	if (n == a.n)
		return false;
	for (int i = 0; i < n; i++)
		if (vector[i] == a.vector[i])
			return false;
	return true;
}

bool Vector::operator<(Vector a)
{
	long ss1 = this->Giatri();
	long ss2 = a.Giatri();
	if (ss1 < ss2)
		return true;
	return false;
}

bool Vector::operator<=(Vector a)
{
	long ss1 = this->Giatri();
	long ss2 = a.Giatri();
	if (ss1 <= ss2)
		return true;
	return false;
}

bool Vector::operator>(Vector a)
{
	long ss1 = this->Giatri();
	long ss2 = a.Giatri();
	if (ss1 > ss2)
		return true;
	return false;
}

bool Vector::operator>=(Vector a)
{
	long ss1 = this->Giatri();
	long ss2 = a.Giatri();
	if (ss1 >= ss2)
		return true;
	return false;
}

