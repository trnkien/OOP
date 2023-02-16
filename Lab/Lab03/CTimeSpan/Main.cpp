#include "Time.h"
#include <iostream>
using namespace std;

int main()
{
	Time a;
	cin >> a;
	Time b;
	cin >> b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	if (a == b)
		cout << "a == b" << endl;
	if (a != b)
		cout << "a != b" << endl;
	if (a > b)
		cout << "a>b" << endl;
	if (a >= b)
		cout << "a>=b" << endl;
	if (a < b)
		cout << "a<b" << endl;
	if (a <= b)
		cout << "a<=b" << endl;
	return 0;
}

