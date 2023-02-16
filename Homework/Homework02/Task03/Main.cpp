#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main()
{
	sp sophuc1, sophuc2;
	cout << "Nhap so phuc thu 1: " << endl;
	nhapsophuc(sophuc1);
	cout << "Nhap so phuc thu 2: " << endl;
	nhapsophuc(sophuc2);
	cout << "So phuc thu 1: ";
	xuatsophuc(sophuc1);
	cout << "So phuc thu 2: ";
	xuatsophuc(sophuc2);
	sp tong = cong2sophuc(sophuc1, sophuc2);
	sp hieu = hieu2sophuc(sophuc1, sophuc2);
	cout << "Tong 2 so phuc: ";
	xuatsophuc(tong);
	cout << "Hieu 2 so phuc: ";
	xuatsophuc(hieu);
	return 0;
}

