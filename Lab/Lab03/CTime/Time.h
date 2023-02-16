#pragma once
#include <iostream>
#include <string>

using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time();
	void Check();
	friend istream& operator>> (istream& is, Time& a);
	friend ostream& operator<<(ostream& os, Time a);
	Time operator+(int n);
	Time operator-(int n);
	Time operator-(Time a);
	Time operator++();
	Time operator--();
};

