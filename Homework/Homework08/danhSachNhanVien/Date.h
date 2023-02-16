#pragma once
#include <string>
using namespace std;

class Date
{
private:
	int iDay;
	int iMonth;
	int iYear;
public:
	friend istream& operator>>(istream& is, Date& a);
	friend ostream& operator<<(ostream& os, Date a);
};

