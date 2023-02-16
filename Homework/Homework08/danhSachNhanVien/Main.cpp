#include "dsnv.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	dsnv a;
	cin >> a;
	cout << a;
	cout << "Luong trong 1 thang: " << a.salary() << " VND." << endl;
	cout << "Luong trong 1 nam: " << a.salary() * 24 << " VND." << endl; 
}