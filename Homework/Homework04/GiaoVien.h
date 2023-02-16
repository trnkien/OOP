#pragma once
#include <string>
using namespace std;
class GiaoVien
{
private:
	string Hoten;
	string Msgv;
	int iNamSinh;
	int tuoi;
	int iSoNamCongTac;
public:
	void Nhap();
	void Xuat();
	void KhoitaoTengv(string Name);
	void KhoitaoMsgv(string TeacherID);
	void KhoitaoNamSinh(int YearBorn);
	void KhoitaoTuoi();
	void KhoitaoSoNamCongTac(int YearWorking);
	void SetTengv(string NewName);
	void SetMsgv(string newTeacherID);
	void SetNamSinh(int NewYearBorn);
	void SetTuoi();
	void SetSoNamCongTac(int newYearWorking);
	string GetTengv();
	string GetMsgv();
	int GetNamSinh();
	int GetTuoi();
	int GetSoNamCongTac();
	void Copy(GiaoVien& c);
	void LuongGv();
	~GiaoVien();
};

