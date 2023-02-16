#pragma once
#include <string>
#include <iostream>
using namespace std;

class Date
{
private:
	int iDay;
	int iMonth;
	int iYear;
public:
	Date();
	void Check();
	int CheckMonth();
	friend istream& operator>>(istream& is, Date& a);
	friend ostream& operator<<(ostream& os, Date a);
	Date operator+(int n);
	Date operator-(int n);
	Date operator+(Date a);
	Date operator-(Date a);
	Date operator++();
	Date operator--();
	~Date()
	{

	}
};

