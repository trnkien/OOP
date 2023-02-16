#pragma once
#include <string>
using namespace std;
class Candidate
{
private:
	string strMssv;
	string strHoten;
	int iDay;
	int iMonth;
	int iYear;
	float fDiemToan;
	float fDiemVan;
	float fDiemAnh;
public:
	void NhapInfor();
	void XuatInfor();
	float Tongdiem();
};
bool CheckDate(int day, int month, int year);


