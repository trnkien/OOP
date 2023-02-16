#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vector;
class Matrix
{
private:
	int** matrix;
	int columns;
	int rows;
public:
	Matrix();
	Matrix(int newcolumns);
	Matrix(int newcolumns, int newrows);
	friend istream& operator>>(istream& is, Matrix& a);
	friend ostream& operator<<(ostream& os, Matrix a);
	int GetRows();
	int GetColumns();
	int** GetMatrix();
	void SetColumns(int newcolumns);
	void SetRows(int newrows);
	friend class Vector;
	void operator=(Matrix a);
	Matrix operator*(Vector a);
	Matrix operator*(Matrix a);
};

