#pragma once
#include <iostream>
#include <string>
using namespace std;
class myint
{
private:
	int n;
public:
	myint();
	friend istream& operator>>(istream& is, myint& a);
	friend ostream& operator<<(ostream& os, myint a);
	myint operator+(int a);
	myint operator+(myint a);
	myint operator-(int a);
	myint operator-(myint a);
	myint operator*(int a);
	myint operator*(myint a);
	myint operator/(int a);
	myint operator/(myint a);
	void operator=(int a);
	void operator=(myint a);
	bool operator==(int a);
	bool operator==(myint a);
	bool operator!=(int a);
	bool operator!=(myint a);
	bool operator>(int a);
	bool operator>(myint a);
	bool operator>=(int a);
	bool operator>=(myint a);
	bool operator<(int a);
	bool operator<(myint a);
	bool operator<=(int a);
	bool operator<=(myint a);
	~myint()
	{

	}
};

