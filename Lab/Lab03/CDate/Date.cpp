#include "Date.h"

Date::Date()
{
	iDay = 1;
	iMonth = 1;
	iYear = 2020;
}

void Date::Check()
{
	while (iMonth < 0 || iMonth > 12)
	{
		if (iMonth < 0)
		{
			iMonth = 12 + iMonth;
			iYear--;
		}
		else if (iMonth > 12)
		{
			iMonth = iMonth - 12;
			iYear++;
		}
	}
	int iDayMax = this->CheckMonth();
	while (iDay < 0 || iDay > iDayMax)
	{
		if (iDay < 0)
		{
			iDay = iDayMax + iDay;
			iMonth--;
		}
		else if (iDay > iDayMax)
		{
			iDay = iDay - iDayMax;
			iMonth++;
		}
	}
}

int Date::CheckMonth()
{
	int DayMax = 0;
	switch (iMonth)
	{
	case 1:
	case 3:
	case 5:
	case 8:
	case 10:
	case 12:
		DayMax = 31;
		break;
	case 2:
		if ((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
			DayMax = 29;
		else
			DayMax = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		DayMax = 30;
		break;
	}
	return DayMax;
}

istream& operator>>(istream& is, Date& a)
{
	cout << "Nhap nam: ";
	is >> a.iYear;
	while (a.iYear < 0)
	{
		if (a.iYear < 0)
		{
			cout << "Khong hop le ! Nhap lai: ";
			cin >> a.iYear;
		}
	}
	cout << "Nhap thang: ";
	is >> a.iMonth;
	while (a.iMonth < 0 || a.iMonth > 12)
	{
		if (a.iMonth < 0 || a.iMonth > 12)
		{
			cout << "Khong hop le ! Nhap lai: ";
			cin >> a.iMonth;
		}
	}
	int DayMax = a.CheckMonth();
	cout << "Nhap ngay: ";
	is >> a.iDay;
	while (a.iDay < 0 || a.iDay > DayMax)
	{
		if (a.iDay < 0 || a.iDay > DayMax)
		{
			cout << "Khong hop le ! Nhap lai: ";
			is >> a.iDay;
		}
	}
	a.Check();
	return is;
}

ostream& operator<<(ostream& os, Date a)
{
	a.Check();
	os << "Ngay " << a.iDay << ", ";
	os << "thang " << a.iMonth << ", ";
	os << "nam " << a.iYear << ".";
	return os;
}

Date Date::operator+(int n)
{
	Date kq;
	kq.iDay = iDay + n;
	kq.iMonth = iMonth;
	kq.iYear = iYear;
	kq.Check();
	return kq;
}

Date Date::operator-(int n)
{
	Date kq;
	kq.iDay = iDay - n;
	kq.iMonth = iMonth;
	kq.iYear = iYear;
	kq.Check();
	return kq;
}

Date Date::operator+(Date a)
{
	Date kq;
	kq.iDay = iDay + a.iDay;
	kq.iMonth = iMonth + a.iMonth;
	kq.iYear = iYear + a.iYear;
	kq.Check();
	return kq;
}

Date Date::operator-(Date a)
{
	Date kq;
	kq.iDay = iDay - a.iDay;
	kq.iMonth = iDay - a.iMonth;
	kq.iYear = iYear - a.iYear;
	kq.Check();
	return kq;
}

Date Date::operator++()
{
	this->iDay + 1;
	this->Check();
	return *this;
}

Date Date::operator--()
{
	this->iDay - 1;
	this->Check();
	return *this;
}