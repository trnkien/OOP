#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

istream& operator>>(istream& is, Time& a)
{
	cout << "Nhap gio: ";
	is >> a.hour;
	cout << "Nhap phut: ";
	is >> a.minute;
	cout << "Nhap giay: ";
	is >> a.second;
	return is;
}

ostream& operator<<(ostream& os, Time a)
{
	a.Check();
	if (a.hour <= 1)
		os << a.hour << " hour. ";
	else
		os << a.hour << " hours. ";
	if (a.minute <= 1)
		os << a.minute << " minute. ";
	else
		os << a.minute << " minutes. ";
	if (a.second <= 1)
		os << a.second << " second. ";
	else
		os << a.second << " seconds. ";
	return os;
}

void Time::Check()
{
	while (second < 0 || second > 60)
	{
		if (second > 60)
		{
			second -= 60;
			minute++;
		}
		else if (second < 0)
		{
			second = 60 + second;
			minute--;
		}
	}
	while (minute < 0 || minute > 60)
	{
		if (minute > 60)
		{
			hour++;
			minute -= 60;
		}
		else if (minute < 0)
		{
			hour--;
			minute = 60 + minute;
		}
	}
}

Time Time::operator+(Time a)
{
	Time kq;
	kq.hour = hour + a.hour;
	kq.minute = minute + a.minute;
	kq.second = second + a.second;
	kq.Check();
	return kq;
}

Time Time::operator-(Time a)
{
	Time kq;
	kq.hour = hour - a.hour;
	kq.minute = minute - a.minute;
	kq.second = second - a.second;
	kq.Check();
	return kq;
}

int Time::Second()
{
	int kq;
	hour = hour * 60 * 60;
	minute = minute * 60;
	kq = hour + minute + second;
	return kq;
}

bool Time::operator<(Time a)
{
	int ss2 = a.Second();
	int ss1 = hour * 60 * 60 + minute * 60 + second;
	if (ss1 < ss2)
		return true;
	else
		return false;
}

bool Time::operator<=(Time a)
{
	int ss2 = a.Second();
	int ss1 = hour * 60 * 60 + minute * 60 + second;
	if (ss1 <= ss2)
		return true;
	else
		return false;
}

bool Time::operator>(Time a)
{
	int ss2 = a.Second();
	int ss1 = hour * 60 * 60 + minute * 60 + second;
	if (ss1 > ss2)
		return true;
	else
		return false;
}

bool Time::operator>=(Time a)
{
	int ss2 = a.Second();
	int ss1 = hour * 60 * 60 + minute * 60 + second;
	if (ss1 >= ss2)
		return true;
	else
		return false;
}

bool Time::operator==(Time a)
{
	int ss2 = a.Second();
	int ss1 = hour * 60 * 60 + minute * 60 + second;
	if (ss1 == ss2)
		return true;
	else
		return false;
}

bool Time::operator!=(Time a)
{
	int ss2 = a.Second();
	int ss1 = hour * 60 * 60 + minute * 60 + second;
	if (ss1 != ss2)
		return true;
	else
		return false;
}
