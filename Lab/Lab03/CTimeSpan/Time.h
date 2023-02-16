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
	friend istream& operator>>(istream& is, Time& a);
	friend ostream& operator<<(ostream& os, Time a);
	void Check();
	int Second();
	Time operator+(Time a);
	Time operator-(Time a);
	bool operator==(Time a);
	bool operator!=(Time a);
	bool operator>(Time a);
	bool operator>=(Time a);
	bool operator<(Time a);
	bool operator<=(Time a);
};

