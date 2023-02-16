#include "Date.h"
#include <iostream>
#include <string>
using namespace std;

istream& operator>>(istream& is, Date& a)
{
	cout << "Nhap ngay sinh: ";
	is >> a.iDay;
	while (a.iDay < 0 || a.iDay > 31)
	{
		if (a.iDay < 0 || a.iDay > 31)
			cout << "Khong hop le !" << endl << "Nhap lai: ";
		is >> a.iDay;
	}
	cout << "Nhap thang sinh: ";
	is >> a.iMonth;
	while (a.iMonth < 0 || a.iMonth > 12)
	{
		if (a.iMonth < 0 || a.iMonth > 12)
			cout << "Khong hop le !" << endl << "Nhap lai: ";
		is >> a.iMonth;
	}
	int iDaymax;
	switch (a.iMonth)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		iDaymax = 31;
		break;
	case 2:
		if ((a.iYear % 4 == 0 && a.iYear % 100 != 0) || (a.iYear % 400 == 0))
			iDaymax = 29;
		else
			iDaymax = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		iDaymax = 30;
		break;
	}
	while(a.iDay > iDaymax)
	{
		if (a.iDay > iDaymax)
			cout << "Ngay khong hop le !" << endl << "Nhap lai: ";
		is >> a.iDay;
	}
	cout << "Nhap nam sinh: ";
	cin >> a.iYear;
	while (a.iYear < 0)
	{
		if (a.iYear < 0)
			cout << "Khong hop le !" << endl << "Nhap lai: ";
		is >> a.iYear;
	}
	return is;
}

ostream& operator<<(ostream& os, Date a)
{
	cout << "Sinh ngay " << a.iDay << ", thang " << a.iMonth << ", nam " << a.iYear << "." << endl;
	return os;
}
