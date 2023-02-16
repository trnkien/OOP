#include "integer.h"

integer::integer()
{
	n = 0;
}

istream& operator>>(istream& is, integer& a)
{
	is >> a.n;
	return is;
}

ostream& operator<<(ostream& os, integer a)
{
	os << a.n;
	return os;
}

void integer::operator=(integer a)
{
	n = a.n;
}

void integer::operator=(int a)
{
	n = a;
}

bool integer::operator<(integer a)
{
	if (n < a.n)
		return true;
	return false;
}

bool integer::operator<(int a)
{
	if (n < a)
		return true;
	return false;
}

bool integer::operator<=(integer a)
{
	if (n <= a.n)
		return true;
	return false;
}

bool integer::operator<=(int a)
{
	if (n <= a)
		return true;
	return false;
}

bool integer::operator>(integer a)
{
	if (n > a.n)
		return true;
	return false;
}

bool integer::operator>(int a)
{
	if (n > a)
		return true;
	return false;
}

bool integer::operator>=(integer a)
{
	if (n >= a.n)
		return true;
	return false;
}

bool integer::operator>=(int a)
{
	if (n >= a)
		return true;
	return false;
}

bool integer::operator==(integer a)
{
	if (n == a.n)
		return true;
	return false;
}

bool integer::operator==(int a)
{
	if (n == a)
		return true;
	return false;
}

bool integer::operator!=(integer a)
{
	if (n != a.n)
		return true;
	return false;
}

bool integer::operator!=(int a)
{
	if (n != a)
		return true;
	return false;
}

integer integer::operator+(int a)
{
	integer kq;
	kq.n = n + a;
	return kq;
}

integer integer::operator+(integer a)
{
	integer kq;
	kq.n = n + a.n;
	return kq;
}

integer integer::operator-(int a)
{
	integer kq;
	kq.n = n - a;
	return kq;
}

integer integer::operator-(integer a)
{
	integer kq;
	kq.n = n - a.n;
	return kq;
}

integer integer::operator*(int a)
{
	integer kq;
	kq.n = n * a;
	return kq;
}

integer integer::operator*(integer a)
{
	integer kq;
	kq.n = n * a.n;
	return kq;
}

integer integer::operator/(int a)
{
	integer kq;
	kq.n = n / a;
	return kq;
}

integer integer::operator/(integer a)
{
	integer kq;
	kq.n = n / a.n;
	return kq;
}