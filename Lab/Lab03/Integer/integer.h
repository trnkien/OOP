#pragma once
#include <iostream>
#include <string>
using namespace std;
class integer
{
private:
	int n;
public:
	integer();
	friend istream& operator>>(istream& is, integer& a);
	friend ostream& operator<<(ostream& os, integer n);
	integer operator+(integer a);
	integer operator+(int a);
	integer operator-(integer a);
	integer operator-(int a);
	integer operator*(integer a);
	integer operator*(int a);
	integer operator/(integer a);
	integer operator/(int a);
	void operator=(integer a);
	void operator=(int a);
	bool operator>(integer n);
	bool operator>(int n);
	bool operator>=(integer n);
	bool operator>=(int n);
	bool operator<(integer n);
	bool operator<(int n);
	bool operator<=(integer n);
	bool operator<=(int n);
	bool operator==(integer n);
	bool operator==(int n);
	bool operator!=(integer n);
	bool operator!=(int n);
};

