#include "Time.h"

Time::Time()
{
	hour = 0;
	minute = 0;
	second = 0;
}

void Time::Check()
{
	while (second < 0 || second > 60)
	{
		if (second < 0)
		{
			second = 60 + second;
			minute--;
		}
		else if (second > 60)
		{
			second -= 60;
			minute++;
		}
	}
	while (minute < 0 || minute > 60)
	{
		if (minute < 0)
		{
			minute = 60 - minute;
			hour--;
		}
		else if (minute > 60)
		{
			minute -= 60;
			hour++;
		}
	}
	while (hour < 0 || hour > 60)
	{
		if (hour < 0)
			hour = 24 + hour;
		else if (hour > 24)
			hour -= 24;
	}
}

istream& operator>> (istream& is, Time& a)
{
	cout << "Nhap gio: ";
	is >> a.hour;
	cout << "Nhap phut: ";
	is >> a.minute;
	cout << "Nhap giay: ";
	is >> a.second;
	a.Check();
	return is;
}

ostream& operator<<(ostream& os, Time a)
{
	if (a.hour <= 1)
		os << a.hour << " hour. ";
	else
		os << a.hour << " hours. ";
	if (a.minute <= 1)
		os << a.minute << " minute. ";
	else
		cout << a.minute << " minutes. ";
	if (a.second <= 1)
		os << a.second << " second. ";
	else
		os << a.second << " seconds. ";
	return os;
}

Time Time::operator+(int n)
{
	Time kq;
	kq.second = second + n;
	kq.hour = hour;
	kq.minute = minute;
	kq.Check();
	return kq;
}

Time Time::operator-(int n)
{
	Time kq;
	kq.second = second - n;
	kq.hour = hour;
	kq.minute = minute;
	kq.Check();
	return kq;
}

Time Time::operator-(Time a)
{
	Time kq;
	kq.hour = hour + a.hour;
	kq.minute = minute + a.minute;
	kq.second = second + a.second;
	return kq;
}

Time Time::operator++()
{
	return *this + 1;
}

Time Time::operator--()
{
	return *this - 1;
}
