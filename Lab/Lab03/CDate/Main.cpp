#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
	Date a;
	cout << "Nhap a: ";
	cin >> a;
	cout << "a: " << a << endl;
	Date b;
	cout << "Nhap b: ";
	cin >> b;
	cout << "b: " << b << endl;
	cout << "a+b: " << a + b << endl;
	cout << "a-b: " << a - b << endl;
	int n = 5;
	cout << "a+n: " << a + n << endl;
	cout << "a-n: " << a - n << endl;
	++a;
	cout << "++a: " << a << endl;
	--a;
	cout << "--a: " << a;
}