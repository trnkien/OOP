#pragma once
class Vector;
class Matrix
{
	int** matrix;
	int columns;
	int rows;
public:
	Matrix();
	Matrix(int newcolumns);
	Matrix(int newcolumns, int newrows);
	void Nhap();
	void Xuat();
	int Get_rows();
	int Get_columns();
	int** Get_matrix();
	void SetColumns(int newcolumns);
	void SetRows(int newrows);
	Matrix(Matrix& a);
	friend Matrix Sum(Vector a, Matrix b);
	friend Matrix Product(Vector a, Matrix b);
	friend class Vector;
	void Sum1(Vector a);
	void Product1(Vector a);
	~Matrix();
};

