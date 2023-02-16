#pragma once
class Matrix;
class Vector
{
private:
	int* vecto;
	int n;
public:
	Vector();
	Vector(int newn);
	void Nhap();
	void Xuat();
	int Get_n();
	int* Get_vecto();
	void Set_n_vecto(int newn, int* newvecto);
	Vector(Vector& a);
	friend Matrix Sum(Vector a, Matrix b);
	friend Matrix Product(Vector a, Matrix b);
	friend class Matrix;
	~Vector();
};

