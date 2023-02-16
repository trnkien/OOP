#include "myint.h"
#include <iostream>
using namespace std;

int main()
{
	myint f;
	cout << "f = " << f << endl;
	myint a;
	cout << "Nhap a: ";
	cin >> a;
	cout << "a = " << a << endl;
	myint b;
	cout << "nhap b: ";
	cin >> b;
	cout << "b = " << b << endl;
	int c = 3;
	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a * b << endl;
	cout << "a/b = " << a / b << endl;
	cout << "a+c = " << a + c << endl;
	cout << "a-c = " << a - c << endl;
	cout << "a*c = " << a * c << endl;
	cout << "a/c = " << a / c << endl;
	myint e = a;
	cout << "e = " << e << endl;
	a = c;
	cout << "a = " << a << endl;
	int d = 5;
	if (a == b)
		cout << "a==b" << endl;
	if (a == d)
		cout << "a==d" << endl;
	if (a != b)
		cout << "a!=b" << endl;
	if (a != d)
		cout << "a!=d" << endl;
	if (a > b)
		cout << "a>b" << endl;
	if (a > d)
		cout << "a>d" << endl;
	if (a >= b)
		cout << "a>=b" << endl;
	if (a >= d)
		cout << "a>=d" << endl;
	if (a < b)
		cout << "a<b" << endl;
	if (a < d)
		cout << "a<d" << endl;
	if (a <= b)
		cout << "a<=b" << endl;
}