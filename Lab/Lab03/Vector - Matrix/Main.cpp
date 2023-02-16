#include "CVector.h"
#include "CMatrix.h"
#include <iostream>
using namespace std;

int main()
{
	Vector a;
	cin >> a;
	cout << "a: " << a;
	cout << a.GetVector() << endl;
	cout << a.Get_n() << endl;
	Vector b;
	//a.Setn(6);
	//a.SetVector(b.GetVector());
	cout << "b: " << b << endl;
	cout << "Gia tri cua a = " << a.Giatri() << endl;
	cout << "Gia tri cua b = " << b.Giatri() << endl;
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
	Matrix x;
	cout << "x : " << endl;
	cout << x << endl;
	Matrix y;
	cin >> y;
	cout << "y: " << endl;
	cout << y << endl;
	cout << x.GetColumns() << endl;
	cout << x.GetMatrix() << endl;
	cout << x.GetRows() << endl;
	//x.SetRows(5);
	//x.SetColumns(4);
	Matrix z = x * a;
	cout << "z = " << z << endl;
	Matrix l = x * y;
	cout << "l = " << l << endl;
}