#pragma once
#include <iostream>
#include <string>
using namespace std;
class Matrix;
class Vector
{
private:
	int* vector;
	int n;
public:
	Vector();
	Vector(int newn);
	friend istream& operator>>(istream& is, Vector& a);
	friend ostream& operator<<(ostream& os, Vector& a);
	int* GetVector();
	int Get_n();
	void SetVector(int* newvector);
	void Setn(int newn);
	void SetVector(Vector newvector);
	void operator=(Vector a);
	bool operator==(Vector a);
	bool operator!=(Vector a);
	bool operator>(Vector a);
	bool operator>=(Vector a);
	bool operator<(Vector a);
	bool operator<=(Vector a);
	long Giatri();
	friend class Matrix;
};
