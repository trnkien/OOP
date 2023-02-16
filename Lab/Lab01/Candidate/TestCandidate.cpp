#include "TestCandidate.h"
#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;
//Hàm nhập danh sách sinh viên
void TestCandidate::NhapDS()
{
	do
	{
		cout << "Nhap so luong: ";
		cin >> soluong;
		if (soluong <= 0)
		{
			cout << "so luong > 0. Nhap lai: ";
			cin >> soluong;
		}
	} while (soluong <= 0);
	DanhSach = new Candidate[soluong];
	for (int i = 0; i < soluong; i++)
		DanhSach[i].NhapInfor();
}
//Hàm xuất danh sách sinh viên
void TestCandidate::XuatDS()
{
	for (int i = 0; i < soluong; i++)
		if (DanhSach[i].Tongdiem() > 15)
			DanhSach[i].XuatInfor();
}
