#include "Time.h"
#include <iostream>
using namespace std;

int main()
{
	Time a;
	cout << "Nhap a: " << endl;
	cin >> a;
	cout << "a: " << a << endl;
	int b = 3;
	cout << "a+b: " << a + b << endl;
	cout << "a-b: " << a - b << endl;
	++a;
	cout << "a++ = " << a << endl;
	--a;
	cout << "a-- = " << a << endl;
	Time c;
	cout << "Nhap c: " << endl;
	cin >> c;
	cout << "c: " << c << endl;
	cout << "a + c = " << a - c;
}