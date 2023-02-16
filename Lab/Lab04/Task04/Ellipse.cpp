#include "Ellipse.h"
#include <iostream>
#include <string>
using namespace std;

void Ellipse::Nhap()
{
	O.Nhap();
	cout << "Nhap canh dai: ";
	cin >> Long;
	while (Long < 0)
	{
		if (Long < 0)
		{
			cout << "Canh dai > 0. Nhap lai: ";
			cin >> Long;
		}
	}
	cout << "Nhap canh ngan: ";
	cin >> Short;
	while (Short < 0 || Short > Long)
	{
		if (Short < 0 || Short > Long)
		{
			cout << "Canh ngan < canh dai. Canh ngan > 0." << endl;
			cin >> Short;
		}
	}
}

void Ellipse::Xuat()
{
	cout << "Tam ";
	O.Xuat();
	cout << endl;
	cout << "Canh dai: " << Long << endl;
	cout << "Canh ngan: " << Short << endl;
}

