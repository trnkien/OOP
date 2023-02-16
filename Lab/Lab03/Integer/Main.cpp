#include "integer.h"
#include <iostream>
using namespace std;

int main()
{
	integer a;
	cout << "Nhap a: ";
	cin >> a;
	cout << "a = " << a << endl;
	integer b;
	integer c = a;
	if (c == b)
		cout << "c==b" << endl;
	if (c != b)
		cout << "c!=b" << endl;
	if (c > b)
		cout << "c>b" << endl;
	if (c >= b)
		cout << "c>=b" << endl;
	if (c < b)
		cout << "c<b" << endl;
	if (c <= b)
		cout << "c<=b" << endl;
}