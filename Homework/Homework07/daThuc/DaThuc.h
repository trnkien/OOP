#pragma once
class DT
{
private:
	int n;
	int* arr;
public:
	DT();
	DT(int newn);
	void Nhap();
	void Xuat();
	int Get_n();
	void Set_n(int newn);
	void Set_DT(int newn, int* newarr);
	DT Copy(DT& DTCop);
	DT operator+(DT dt2);
	DT operator-(DT dt2);
	bool operator!=(DT dt2);
	long GiatriDaThuc();
	~DT();
};

