#include "Candidate.h"
#include "TestCandidate.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Khai báo
	TestCandidate DanhSachThiSinh;
	cout << "Nhap danh sach thi sinh: " << endl;
	//Nhập danh sách thí sinh
	DanhSachThiSinh.NhapDS();
	cout << "Danh Sach thi sinh: " << endl;
	//Xuất danh sách thí sinh
	DanhSachThiSinh.XuatDS();
	return 0;
}