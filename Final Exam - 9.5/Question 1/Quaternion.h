#pragma once
#include <iostream>
using namespace std;

class Quaternion
{
private:
	int one;
	int two;
	int three; 
	int four;
public:
	friend istream& operator>>(istream& is, Quaternion& a);
	friend ostream& operator<<(ostream& os, Quaternion a);
	Quaternion operator+(Quaternion b);
	Quaternion operator-(Quaternion b);
};

