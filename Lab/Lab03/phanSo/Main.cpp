#include "PhanSo.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int b = 3;
	PhanSo a(b);
	cout << "a = " << a << endl;
	PhanSo c;
	cin >> c;
	cout << "c = " << c << endl;
	cout << "a + c = " << a + c << endl;
	cout << "a - c = " << a - c << endl;
	cout << "a * c = " << a * c << endl;
	cout << "a / c = " << a / c << endl;
	if (a > c)
		cout << "a > c" << endl;
	if (a >= c)
		cout << "a >= c" << endl;
	if (a < c)
		cout << "a<c" << endl;
	if (a <= c)
		cout << "a<=c" << endl;
	if (a == c)
		cout << "a==c" << endl;
	else
		cout << "a!=c" << endl;
}


