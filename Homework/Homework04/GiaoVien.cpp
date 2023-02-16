#include "GiaoVien.h"
#include <iostream>
#include <string>
using namespace std;

//Nhập, xuất.
void GiaoVien::Nhap()
{
	cout << "Nhap ten giao vien: ";
	cin.ignore(); // Xóa bộ nhớ đệm.
	getline(cin, Hoten);
	cout << "Nhap ma so giao vien: ";
	getline(cin, Msgv);
	cout << "Nhap nam sinh cua giao vien: ";
	cin >> iNamSinh;
	tuoi = 2020 - iNamSinh;
	cout << "Tuoi cua giao vien: " << tuoi << endl;
	cout << "So nam cong tac: ";
	cin >> iSoNamCongTac;
}
void GiaoVien::Xuat()
{
	cout << "Ten giao vien: " << Hoten << endl;
	cout << "Ma so giao vien: " << Msgv << endl;
	cout << "Nam sinh: " << iNamSinh << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "So nam cong tac: " << iSoNamCongTac << endl;
}
//Khởi tạo
void GiaoVien::KhoitaoTengv(string Name)
{
	Hoten = Name;
}
void GiaoVien::KhoitaoMsgv(string TeacherID)
{
	Msgv = TeacherID;
}
void GiaoVien::KhoitaoNamSinh(int YearBorn)
{
	iNamSinh = YearBorn;
}
void GiaoVien::KhoitaoTuoi()
{
	tuoi = 2020 - iNamSinh;
}
void GiaoVien::KhoitaoSoNamCongTac(int YearWorking)
{
	iSoNamCongTac = YearWorking;
}
//Cập nhật
void GiaoVien::SetTengv(string NewName)
{
	Hoten = NewName;
}
void GiaoVien::SetMsgv(string newTeacherID)
{
	Msgv = newTeacherID;
}
void GiaoVien::SetNamSinh(int newYearBorn)
{
	iNamSinh = newYearBorn;
}
void GiaoVien::SetTuoi()
{
	tuoi = 2020 - iNamSinh + 1;
}
void GiaoVien::SetSoNamCongTac(int newYearWorking)
{
	iSoNamCongTac = newYearWorking;
}
//Truy vấn
string GiaoVien::GetTengv()
{
	return Hoten;
}
string GiaoVien::GetMsgv()
{
	return Msgv;
}
int GiaoVien::GetNamSinh()
{
	return iNamSinh;
}
int GiaoVien::GetTuoi()
{
	return tuoi;
}
int GiaoVien::GetSoNamCongTac()
{
	return iSoNamCongTac;
}
//Sao chép.
void GiaoVien::Copy(GiaoVien& c)
{
	Hoten = c.Hoten;
	iNamSinh = c.iNamSinh;
	Msgv = c.Msgv;
	tuoi = c.tuoi;
	iSoNamCongTac = c.iSoNamCongTac;
}
//Lương giáo viên.
void GiaoVien::LuongGv()
{
	int Luong = 0;
	if (iSoNamCongTac > 30)
	{
		Luong = 5000000 * 2;
		cout << "Luong = " << " 10 trieu VND." << endl;
	}
	else
	{
		Luong = 5000000;
		cout << "Luong = " << "5 trieu VND." << endl;
	}
}
//Destructor
GiaoVien::GiaoVien()
{

}