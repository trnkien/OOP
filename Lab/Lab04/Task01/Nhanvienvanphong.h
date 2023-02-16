#pragma once
#include "Date.h"
#include "Nguoi.h"
#include <string>
using namespace std;

class Nhanvienvanphong:public Nguoi
{
private:
	int Luong;
	int songaylamviec;
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	void SetSongaylamviec(int a);
	int GetLuong();
};

