#include "Date.h"

int Date::iDaymax()
{
	int max = 0;
	switch (iMonth)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			max = 31;
			break;
		case 2:
		{
			if((iYear % 4 == 0 && iYear % 100 != 0) || (iYear % 400 == 0))
				max = 29;
			else
				max = 28;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:
			max = 30;
			break;
	}
	return max;
}

istream& operator>>(istream& is, Date& a)
{
	cout << "Nhap nam sinh: ";
	is >> a.iYear;
	while (a.iYear < 0)
	{
		if (a.iYear < 0)
		{
			cout << "Nam sinh khong hop le ! Nhap lai: ";
			cin >> a.iYear;
		}
	}
	cout << "Nhap thang sinh: ";
	cin >> a.iMonth;
	while (a.iMonth < 0 || a.iMonth > 12)
	{
		if (a.iMonth < 0 || a.iMonth > 12)
		{
			cout << "Thang sinh khong hop le ! Nhap lai: ";
			cin >> a.iMonth;
		}
	}
	cout << "Nhap ngay sinh: ";
	cin >> a.iDay;
	int iDayMax = a.iDaymax();
	while (a.iDay < 0 || a.iDay > iDayMax)
	{
		if (a.iDay < 0 || a.iDay > iDayMax)
		{
			cout << "Ngay sinh khong hop le ! Nhap lai: ";
			cin >> a.iDay;
		}
	}
	return is;
}

ostream& operator<<(ostream& os, Date a)
{
	os << "Ngay " << a.iDay;
	os << ", thang " << a.iMonth;
	os << ", nam " << a.iYear;
	return os;
}