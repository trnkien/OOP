#include "CString.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	CString a;
	cout << "Nhap chuoi a: ";
	cin >> a;
	cout << "a: " << a << endl;
	CString b;
	cout << "Nhap chuoi b: ";
	cin >> b;
	cout << "b: " << b << endl;
	cout << "a+b: " << a + b << endl;
	if (a == b)
		cout << "a==b" << endl;
	if (a != b)
		cout << "a!=b" << endl;
	if (a > b)
		cout << "a>b" << endl;
	if (a >= b)
		cout << "a>=b" << endl;
	if (a < b)
		cout << "a<b" << endl;
	if (a <= b)
		cout << "a<=b" << endl;
}