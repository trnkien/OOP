#pragma once
#include <string>
#include <iostream>
using namespace std;

class Date
{
protected:
	int iDay;
	int iMonth;
	int iYear;
public:
	friend istream& operator>>(istream& is, Date& a);
	friend ostream& operator<<(ostream& os, Date a);
	int iDaymax();
	~Date()
	{

	}
};

