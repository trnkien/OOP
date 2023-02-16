#include "CMatrix.h"
#include "CVector.h"
#include <iostream>
#include <string>
using namespace std;
Matrix::Matrix()
{
	columns = 6;
	rows = 5;
	matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
		matrix[i] = (int*)malloc(columns * sizeof(int));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			matrix[i][j] = 1;
}

Matrix::Matrix(int newcolumns)
{
	columns = newcolumns;
	rows = 5;
	matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
		matrix[i] = (int*)malloc(columns * sizeof(int));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			matrix[i][j] = 1;
}

Matrix::Matrix(int newcolumns, int newrows)
{
	columns = newcolumns;
	rows = newrows;
	matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
		matrix[i] = (int*)malloc(columns * sizeof(int));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			matrix[i][j] = 1;
}

istream& operator>>(istream& is, Matrix& a)
{
	cout << "Nhap so hang: ";
	is >> a.rows;
	cout << "Nhap so cot: ";
	is >> a.columns;
	a.matrix = (int**)malloc(a.rows * sizeof(int*));
	for (int i = 0; i < a.rows; i++)
		a.matrix[i] = (int*)malloc(a.columns * sizeof(int));
	for (int i = 0; i < a.rows; i++)
		for (int j = 0; j < a.columns; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			is >> a.matrix[i][j];
		}
	return is;
}

ostream& operator<<(ostream& os, Matrix a)
{
	for (int i = 0; i < a.rows; i++)
	{
		for (int j = 0; j < a.columns; j++)
			os << "a[" << i << "][" << j << "]: " << a.matrix[i][j] << "  ";
		os << endl;
	}
	return os;
}

int Matrix::GetColumns()
{
	return columns;
}

int Matrix::GetRows()
{
	return rows;
}

int** Matrix::GetMatrix()
{
	return matrix;
}

void Matrix::SetColumns(int newcolumns)
{
	columns = newcolumns;
}

void Matrix::SetRows(int newrows)
{
	rows = newrows;
}

void Matrix::operator=(Matrix a)
{
	columns = a.columns;
	rows = a.rows;
	matrix = (int**)malloc(rows * sizeof(int**));
	for (int i = 0; i < rows; i++)
		matrix[i] = (int*)malloc(columns * sizeof(int));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			matrix[i][j] = a.matrix[i][j];

}

Matrix Matrix::operator*(Vector a)
{
	Matrix kq;
	int temp;
	if (a.n < columns)
		temp = a.n;
	else
		temp = columns;
	for (int j = 0; j < temp; j++)
		kq.matrix[0][j] = a.vector[j] * matrix[0][j];
	return kq;
}

Matrix Matrix::operator*(Matrix x)
{
	Matrix kq;
	if (rows != x.rows && columns != x.columns)
	{
		cout << "2 matrix are not compatible!" << endl;
		return *this;
	}
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
		{
			int a = 0, b = 0;
			if (a > columns || b > rows)
				break;
			kq.matrix[i][j] = matrix[i][a] + x.matrix[b][j];
			a++;
			b++;
		}
	return kq;
}
