#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;

//Hàm nhập thông tin sinh vien
void Candidate::NhapInfor()
{
	cin.ignore();
	cout << "Nhap ho ten sinh vien: ";
	getline(cin,strHoten);
	cout << "Nhap ma so sinh vien: ";
	getline(cin,strMssv);
	do
	{
		cout << "Nhap ngay, thang, nam sinh: " << endl;
		cout << "ngay ";
		cin >> iDay;
		cout << "thang ";
		cin >> iMonth;
		cout << "nam ";
		cin >> iYear;
		if (CheckDate(iDay, iMonth, iYear) == false)
		{
			cout << "Ngay khong hop le! Nhap lai" << endl;
			cout << "Nhap ngay, thang, nam sinh: " << endl;
			cout << "ngay ";
			cin >> iDay;
			cout << "thang ";
			cin >> iMonth;
			cout << "nam ";
			cin >> iYear;
		}
	} while (CheckDate(iDay, iMonth, iYear) == false);	
	cout << "Nhap diem toan: ";
	cin >> fDiemToan;
	cout << "Nhap diem anh: ";
	cin >> fDiemAnh;
	cout << "Nhap diem van: ";
	cin >> fDiemVan;
}
//Hàm xuất thông tin sinh vien
void Candidate::XuatInfor()
{
	cout << "Ho va ten sinh vien: " << strHoten << endl;
	cout << "Ma so sinh vien: " << strMssv << endl;
	cout << "Sinh ngay " << iDay << ", thang " << iMonth << ", nam " << iYear << endl;
	cout << "Diem toan: " << fDiemToan << endl;
	cout << "Diem van: " << fDiemVan << endl;
	cout << "Diem anh: " << fDiemAnh << endl;
}
//Hàm nhập tính tổng điểm
float Candidate::Tongdiem()
{
	float tong = fDiemAnh + fDiemToan + fDiemVan;
	return tong;
}
//Hàm kiểm tra ngày tháng năm sinh
bool CheckDate(int day, int month, int year)
{
	int daymax;
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		daymax = 31;
		break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			daymax = 29;
		else
			daymax = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		daymax = 30;
		break;
	default:
		cout << "Nhap thang khong dung: ";
		break;
	}
	if (day < 0 || day > daymax)
		return false;
	else
		return true;
}