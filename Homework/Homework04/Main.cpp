#include "GiaoVien.h""
#include <iostream>
#include <string>
using namespace std;

int menu();
int menucapnhat();
void ThuchienMenuCapnhat(GiaoVien a);
int menutruyvan();
void ThuchienMenuTruyvan(GiaoVien a);

int main()
{
	GiaoVien Teacher;
	int flag = true;
	while (flag != false)
	{
		int luachon = menu();
		switch(luachon)
		{
			case 1:
			{
				cout << "Nhap thong tin giao vien: " << endl;
				Teacher.Nhap();
				break;
			}
			case 2:
			{
				cout << "Thong tin giao vien: ";
				Teacher.Xuat();
				break;
			}
			case 3:
			{
				ThuchienMenuTruyvan(Teacher);
				break;
			}
			case 4:
			{
				ThuchienMenuCapnhat(Teacher);
				break;
			}
			case 5:
			{
				cout << "Luong giao vien trong 1 thang: ";
				Teacher.LuongGv();
				cout << endl;
				break;
			}
			case 6: 
			{
				cout << "Xin chao!" << endl;
				flag = false;
				break;
			}
			default:
			{
				cout << "Chon sai! Chon lai: ";
				break;
			}
		}
	}
	cout << endl;
	//Sao chép.
	GiaoVien Teacher1;
	Teacher1.Copy(Teacher);
	cout << "Sao chep thong tin: " << endl;
	Teacher1.Xuat();
	//Khởi tạo.
	GiaoVien Teacher2;
	string Name = "Tan";
	string TeacherID = "237";
	Teacher2.KhoitaoTengv(Name);
	Teacher2.KhoitaoMsgv(TeacherID);
	Teacher2.KhoitaoNamSinh(1990);
	Teacher2.KhoitaoTuoi();
	Teacher2.KhoitaoSoNamCongTac(20);
	Teacher2.Xuat();
	return 0;
}

//Menu
int menu()
{
	int luachon;
	cout << "===========MENU===========" << endl;
	cout << "1. Nhap thong tin giao vien." << endl;
	cout << "2. Xuat thong tin giao vien." << endl;
	cout << "3. Truy van thong tin giao vien." << endl;
	cout << "4. Cap nhat thong tin giao vien." << endl;
	cout << "5. Luong giao vien trong 1 thang." << endl;
	cout << "6. Ket thuc!" << endl;
	cout << "==========================" << endl;
	cout << "Lua chon cua ban: ";
	cin >> luachon;
	return luachon;
}

//Menu cập nhật
int menucapnhat()
{
	int luachon;
	cout << "==========CAP NHAT==========" << endl;
	cout << "1. Ho ten." << endl;
	cout << "2. Ma so giao vien." << endl;
	cout << "3. Nam sinh." << endl;
	cout << "4. So nam cong tac." << endl;
	cout << "5. Ket thuc!" << endl;
	cout << "============================" << endl;
	cout << "Lua chon cua ban: ";
	cin >> luachon;
	return luachon;
}
void ThuchienMenuCapnhat(GiaoVien a)
{
	int flag = true;
	while (flag != false)
	{
		int luachon = menucapnhat();
		switch (luachon)
		{
			case 1:
			{
				string newHoten;
				cout << "Nhap ten moi: ";
				cin.ignore();
				getline(cin, newHoten);
				a.SetTengv(newHoten);
				cout << endl;
				break;
			}
			case 2:
			{
				string newMsgv;
				cin.ignore();
				cout << "Nhap ma so giao vien moi: ";
				getline(cin, newMsgv);
				a.SetMsgv(newMsgv);
				cout << endl;
				break;
			}
			case 3:
			{
				int newNamSinh;
				cout << "Nhap nam sinh moi: ";
				cin >> newNamSinh;
				a.SetNamSinh(newNamSinh);
				a.SetTuoi();
				cout << endl;
				break;
			}
			case 4:
			{
				int newSoNamCongTac;
				cout << "Nhap so nam cong tac: ";
				cin >> newSoNamCongTac;
				a.SetSoNamCongTac(newSoNamCongTac);
				cout << endl;
				break;
			}
			case 5:
			{
				flag = false;
				break;
			}
			default:
			{
				cout << "Chon khong dung! Chon lai: ";
				break;
			}
		}
	}
	cout << endl;
}

//Menu truy vấn
int menutruyvan()
{
	int luachon;
	cout << "===========TRUY VAN===========" << endl;
	cout << "1. Ho ten." << endl;
	cout << "2. Ma so giao vien." << endl;
	cout << "3. Nam sinh." << endl;
	cout << "4. Tuoi." << endl;
	cout << "5. So nam cong tac" << endl;
	cout << "6. Ket thuc!" << endl;
	cout << "==============================" << endl;
	cout << "Lua chon cua ban: ";
	cin >> luachon;
	return luachon;
}
void ThuchienMenuTruyvan(GiaoVien a)
{
	int flag = true;
	while (flag != false)
	{
		int luachon = menutruyvan();
		switch (luachon)
		{
			case 1:
			{
				cout << "Ho ten: " << a.GetTengv() << endl;
				break;
			}
			case 2:
			{
				cout << "Ma so giao vien: " << a.GetMsgv() << endl;
				break;
			}
			case 3:
			{
				cout << "Nam sinh: " << a.GetNamSinh() << endl;
				break;
			}
			case 4:
			{
				cout << "Tuoi: " << a.GetTuoi() << endl;
				break;
			}
			case 5:
			{
				cout << "So nam cong tac: " << a.GetSoNamCongTac() << endl;
				break;
			}
			case 6:
			{
				flag = false;
				break;
			}
			default:
			break;
		}
	}
	cout << endl;
}