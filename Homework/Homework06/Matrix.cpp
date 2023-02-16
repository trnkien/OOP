#include "Matrix.h"
#include "Vector.h"
#include <iostream>
using namespace std;
//Khởi tạo.
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
	newcolumns = 6;
	columns = newcolumns;
	rows = newrows;
	matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
		matrix[i] = (int*)malloc(columns * sizeof(int));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			matrix[i][j] = 1;
}
//Hàm nhập, xuất.
void Matrix::Nhap()
{
	cout << "Nhap so hang: ";
	cin >> rows;
	cout << "Nhap so cot: ";
	cin >> columns;
	matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
		matrix[i] = (int*)malloc(columns * sizeof(int));
	for(int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
}
void Matrix::Xuat()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << "a[" << i << "][" << j << "]: " << matrix[i][j] << "    ";
		cout << endl;
	}
}
//Hàm truy vấn.
int Matrix::Get_rows()
{
	return rows;
}
int Matrix::Get_columns()
{
	return columns;
}
int** Matrix::Get_matrix()
{
	return matrix;
}
//Hàm cập nhật.
void Matrix::SetColumns(int newcolumns)
{
	columns = newcolumns;
}
void Matrix::SetRows(int newrows)
{
	rows = newrows;
}
//Hàm sao chép.
Matrix::Matrix(Matrix& c)
{
	rows = c.rows;
	columns = c.columns;
	matrix = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < rows; i++)
		matrix[i] = (int*)malloc(columns * sizeof(int));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < columns; j++)
			matrix[i][j] = c.matrix[i][j];
}
//Hàm tính tổng véc-tơ và ma trận.
void Matrix::Sum1(Vector a)
{
	int temp;
	if (a.n < columns)
		temp = a.n;
	else
		temp = columns;
	for (int j = 0; j < temp; j++)
		matrix[0][j] = a.vecto[j] + matrix[0][j];
}
//Hàm tính tích véc-tơ và ma trận.
void Matrix::Product1(Vector a)
{
	int temp;
	if (a.n < columns)
		temp = a.n;
	else
		temp = columns;
	for (int j = 0; j < temp; j++)
		matrix[0][j] = a.vecto[j] * matrix[0][j];
}
//Hàm hủy.
Matrix::~Matrix()
{
	for (int i = 0; i < columns; i++)
		free(matrix[i]);
	free(matrix);
}

