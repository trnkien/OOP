#include "DSSP.h"
#include <iostream>
using namespace std;

int main()
{
	DSSP b;
	cout << "Nhap b: " << endl;
	cin >> b;
	cout << "b: " << endl << b;
	cout <<
		"b[0]: " << b[0] << endl;
	DSSP a = b;
	cout << "a = b: " << a;
}