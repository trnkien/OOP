#pragma once
#include <string>
#include <iostream>
using namespace std;
class SoPhuc
{
private:
	float fThuc;
	float fAo;
public:
	SoPhuc();
	SoPhuc(float a);
	friend istream& operator>>(istream& is, SoPhuc& a);
	friend ostream& operator<<(ostream& os, SoPhuc a);
	SoPhuc operator+(SoPhuc a);
	SoPhuc operator-(SoPhuc a);
	SoPhuc operator*(SoPhuc a);
	SoPhuc operator/(SoPhuc a);
	bool operator==(SoPhuc a);
	bool operator!=(SoPhuc a);
	bool operator>(SoPhuc a);
	bool operator>=(SoPhuc a);
	bool operator<(SoPhuc a);
	bool operator<=(SoPhuc a);
	~SoPhuc()
	{

	}
};
