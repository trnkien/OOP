#pragma once
class Nguoi
{
protected:
	int loai;
	int sucmanh;
	int sotien;
	int tritue;
public:
	Nguoi();
	virtual void Nhap();
	virtual void Xuat();
	void SetLoai(int a);
	int GetLoai();
	int GetSucmanh();
	int GetSotien();
	int GetTritue();
	void SetSucmanh(int a);
	void SetSotien(int a);
	void SetTritue(int a);
	~Nguoi();
};

