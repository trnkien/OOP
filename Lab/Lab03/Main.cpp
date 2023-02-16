#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main()
{
	float b = 6.5;
	SoPhuc a(b);
	cout << "a = " << a << endl;
	SoPhuc c;
	cin >> c;
	cout << "c = " << c << endl;
	cout << "a+c = " << a + c << endl;
	cout << "a-c = " << a - c << endl;
	cout << "a*c = " << a * c << endl;
	cout << "a/c = " << a / c << endl;
	if (a < c)
		cout << "a<c" << endl;
	if (a <= c)
		cout << "a<=c" << endl;
	if (a > c)
		cout << "a>c" << endl;
	if (a >= c)
		cout << "a>=c" << endl;
	if (a == c)
		cout << "a==c";
	else
		cout << "a!=c";
}