#pragma once
#include <iostream>
#include <string>
using namespace std;

class CString
{
private:
	string s;
public:
	CString();
	friend istream& operator>>(istream& is, CString& a);
	friend ostream& operator<<(ostream& os, CString a);
	CString operator+(CString a);
	void operator=(CString a);
	bool operator==(CString a);
	bool operator!=(CString a);
	bool operator>(CString a);
	bool operator>=(CString a);
	bool operator<(CString a);
	bool operator<=(CString a);
};

