#include "myint.h"

myint::myint()
{
	n = 0;
}

istream& operator>>(istream& is, myint& a)
{
	is >> a.n;
	return is;
}

ostream& operator<<(ostream& os, myint a)
{
	os << a.n;
	return os;
}

void myint::operator=(int a)
{
	n = a;
}

void myint::operator=(myint a)
{
	n = a.n;
}

bool myint::operator==(int a)
{
	if (n == a)
		return true;
	return false;
}

bool myint::operator==(myint a)
{
	if (n == a.n)
		return true;
	return false;
}

bool myint::operator!=(int a)
{
	if (n != a)
		return true;
	return false;
}

bool myint::operator!=(myint a)
{
	if (n != a.n)
		return true;
	return false;
}
bool myint::operator>(int a)
{
	if (n > a)
		return true;
	return false;
}

bool myint::operator>(myint a)
{
	if (n > a.n)
		return true;
	return false;
}

bool myint::operator>=(int a)
{
	if (n >= a)
		return true;
	return false;
}

bool myint::operator>=(myint a)
{
	if (n >= a.n)
		return true;
	return false;
}

bool myint::operator<(int a)
{
	if (n < a)
		return true;
	return false;
}

bool myint::operator<(myint a)
{
	if (n < a.n)
		return true;
	return false;
}
bool myint::operator<=(myint a)
{
	if (n < a.n)
		return true;
	return false;
}

bool myint::operator<=(int a)
{
	if (n <= a)
		return true;
	return false;
}
myint myint::operator+(int a)
{
	myint kq;
	kq.n = n + a;
	return kq;
}

myint myint::operator+(myint a)
{
	myint kq;
	kq.n = n - a.n;
	return kq;
}

myint myint::operator-(int a)
{
	myint kq;
	kq.n = n - a;
	return kq;
}

myint myint::operator-(myint a)
{
	myint kq;
	kq.n = n - a.n;
	return kq;
}

myint myint::operator*(int a)
{
	myint kq;
	kq.n = n * a;
	return kq;
}

myint myint::operator*(myint a)
{
	myint kq;
	kq.n = n * a.n;
	return kq;
}

myint myint::operator/(int a)
{
	myint kq;
	kq.n = n / a;
	return kq;
}

myint myint::operator/(myint a)
{
	myint kq;
	kq.n = n / a.n;
	return kq;
}

