#pragma once
#include <iostream>
#include <string>
using namespace std;
class SoPhuc
{
private:
	float fThuc;
	float fAo;
public:
	friend istream& operator>>(istream& is, SoPhuc& a);
	friend ostream& operator<<(ostream& os, SoPhuc a);
	SoPhuc& operator=(SoPhuc& s);
};

