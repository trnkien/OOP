#include "Vector.h"
#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix Sum(Vector a, Matrix b);
Matrix Product(Vector a, Matrix b);

int main()
{
	Vector a;
	a.Nhap();
	Matrix b;
	b.Nhap();
	Matrix c(b);
	c.Sum1(a);
	c.Xuat();
	cout << endl;
	Matrix d(b);
	d.Product1(a);
	d.Xuat();
	return 0;
}

//Hàm bạn: tính tổng véc-tơ và ma trận
Matrix Sum(Vector a, Matrix b)
{
	int temp;
	Matrix c(b);
	if (a.n < b.columns)
		temp = a.n;
	else
		temp = b.columns;
	for (int j = 0; j < temp; j++)
		c.matrix[0][j] = a.vecto[j] + b.matrix[0][j];
	return c;
}
//Hàm bạn: tính tích véc-tơ và ma trận.
Matrix Product(Vector a, Matrix b)
{
	int temp;
	Matrix c(b);
	if (a.n < b.columns)
		temp = a.n;
	else
		temp = b.columns;
	for(int j = 0; j < temp; j++)
		c.matrix[0][j] = a.vecto[j] * b.matrix[0][j];
	return c;
}