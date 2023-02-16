#include "Quaternion.h"

istream& operator>>(istream& is, Quaternion& a)
{
	cout << "Nhap chieu thu nhat: ";
	is >> a.one;
	cout << "Nhap chieu thu hai: ";
	is >> a.two;
	cout << "Nhap chieu thu ba: ";
	is >> a.three;
	cout << "Nhap chieu thu tu: ";
	is >> a.four;
	return is;
}

ostream& operator<<(ostream& os, Quaternion a)
{
	if (a.one < 0)
		os << a.one << "a";
	else os << "+" << a.one << "a";
	if (a.two < 0)
		os << a.two << "b";
	else os << "+" << a.two << "b";
	if (a.three < 0)
		os << a.three << "c";
	else os << "+" << a.three << "c";
	if (a.four < 0)
		os << a.four << "d";
	else os << "+" << a.four << "d";
	return os;
}

Quaternion Quaternion::operator+(Quaternion b)
{
	Quaternion kq;
	kq.one = this->one + b.one;
	kq.two = this->one + b.two;
	kq.three = this->one + b.three;
	kq.four = this->one + b.four;
	return kq;
}

Quaternion Quaternion::operator-(Quaternion b)
{
	Quaternion kq;
	kq.one = this->one - b.one;
	kq.two = this->one - b.two;
	kq.three = this->one - b.three;
	kq.four = this->one - b.four;
	return kq;
}