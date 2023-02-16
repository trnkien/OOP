#include "DT.h"
#include <iostream>
using namespace std;

int main()
{
	DT a;
	cout << "a = " << a << endl;
	DT b;
	cin >> b;
	cout << "b = " << b << endl;
	int x = 3;
	cout << "Gia tri a = " << a.GiaTri(x) << endl;
	cout << "Gia tri b = " << b.GiaTri(x) << endl;
	cout << "He so cua a: " << a.GetHeSo() << endl;
	cout << "So mu cua a: " << a.GetSoMu() << endl;
	a.SetHeSo(3);
	a.SetSoMu(4);
	cout << "a = " << a << endl;
	DT c(5, 6);
	b.SetDT(c);
	cout << "b = " << b << endl;
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