#include "QuanLy.h"
#include <iostream>

int main()
{
	QuanLy a;
	cout << "========== Nhap ===========" << endl;
	a.Nhap();
	a.Xuat();
	a.Giave();
	cout << "======= Nguoi choi chieu nhat ========" << endl;
	a.Max_player();
	cout << "======== Tre em lun nhat ==========" << endl;
	a.ShortestChild();
}
